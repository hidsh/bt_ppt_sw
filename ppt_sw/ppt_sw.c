/*
 * ppt_sw.c
 *
 * Created: 11/6/2013 2:28:04 PM
 *  Author: g
 */ 

#include <avr/io.h>
#include "mystd.h"
#include "keycode.h"

#define BPS 12                      // 9600 bps

u1 keystate[] = {0, 0};             // 0:initial    1:pressed    2:released
#define KS_FORWARD    0
#define KS_BACKWARD   1

//             start len   desc  mod    00   scan1 scan2 scan3 scan4 scan5 scan6
u1 report[] = {0xFD, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


bool is_pressed_forward(void)
{
    u1 *pks = &keystate[KS_FORWARD];
    u1 k = (PINB & (1<<PINB0))? FALSE:TRUE;
    if((k == TRUE) && (*pks == 0))
		*pks = 1;
    else if((k == FALSE) && (*pks == 1))
		*pks = 2;

    return (*pks == 2);
}

bool is_pressed_backward(void)
{
	u1 *pks = &keystate[KS_BACKWARD];
	u1 k = (PINB & (1<<PINB1))? TRUE:FALSE;
	if((k == TRUE) && (*pks == 0))
		*pks = 1;
	else if((k == FALSE) && (*pks == 1))
		*pks = 2;

	return (*pks == 2);
}

void send_byte(u1 ch)
{
	while (!(UCSRA & (1<<UDRE)))	// Wait for empty transmit buffer
		;

	UDR = ch;						// Put data into buffer
}

void send_report(u1 scan_code)
{
	report[5] = scan_code;
	
	for(u1 i=0; i<sizeof(report)/sizeof(u1); i++)
        send_byte(report[i]);
}

void init(void)
{
	// sw
	PORTB = (1<<PB1)|(1<<PB0);		// pull up
	
	// uart
	UCSRA |= 1<<U2X;
	UBRRH = (u1)(BPS>>8);
	UBRRL = (u1)BPS;
	UCSRB |= 1<<TXEN;				// Enable transmitter
	
	// vars
}

int main(void)
{
	bool usb_send_press = FALSE;

	init();
	
    while(1)
    {
		if(usb_send_press == FALSE) {
			if(is_pressed_forward()) {
				send_report(USID_KBD_PAGE_DOWN);
				usb_send_press = TRUE;
			} else if(is_pressed_backward()) {
				send_report(USID_KBD_PAGE_UP);
				usb_send_press = TRUE;
			}
		} else {
			send_report(0x00);      // released
			usb_send_press = FALSE;

			for(u1 i=0;i<sizeof(keystate); i++)
				keystate[i] = 0;
		}
    }
	return EXIT_FAILURE;
}
