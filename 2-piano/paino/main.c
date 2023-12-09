/*

 * main.c

 *
 *  Created on: Nov 29, 2023
 *      Author: hp
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "KPD_interface.h"
#include <util/delay.h>




void main(void)
{

	 CLCD_voidInit();
     KPD_voidInit();
     DIO_voidSetPinDirection(DIO_PORTC,DIO_PIN7,PIN_DIR_OUTPUT);

     DIO_voidSetPortDirection(DIO_PORTD,PORT_DIR_OUTPUT);

     u8 kpd_value;
     CLCD_voidSendString("Welcome to our");
     CLCD_voidSetPosition(CLCD_ROW_2,CLCD_COL_1);
     CLCD_voidSendString("piano system");

     _delay_ms(1000);

     while(1)
     {
    	 kpd_value=KPD_u8GetPressed();

    	 switch(kpd_value)
    	 {
    	 case 1:
    		 CLCD_voidClearScreen();
             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
             DIO_voidSetPortValue(DIO_PORTD,0b10000001);
             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),1);
             _delay_ms(50);

             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
              _delay_ms(50);
              break;


    	 case 2:
    	    		 CLCD_voidClearScreen();
    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	             DIO_voidSetPortValue(DIO_PORTD,0b10000010);
    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),2);
    	             _delay_ms(100);

    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	              _delay_ms(100);
    	              break;

    	 case 3:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b10000100);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),3);
    	    	             _delay_ms(150);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(150);
    	    	              break;

    	 case 4:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b00011000);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),4);
    	    	             _delay_ms(200);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(200);
    	    	              break;

    	 case 5:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b11000011);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),5);
    	    	             _delay_ms(250);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(250);
    	    	              break;

    	 case 6:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b00111100);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),6);
    	    	             _delay_ms(300);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(300);
    	    	              break;
    	 case 7:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b10010010);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),7);
    	    	             _delay_ms(350);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(350);
    	    	              break;

    	 case 8:
    	    	    		 CLCD_voidClearScreen();
    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_HIGH);
    	    	             DIO_voidSetPortValue(DIO_PORTD,0b01001001);
    	    	             CLCD_voidSendExtraChar(CLCD_ROW_1,(CLCD_COL_1-1),8);
    	    	             _delay_ms(400);

    	    	             DIO_voidSetPinValue(DIO_PORTC,DIO_PIN7,PIN_VAL_LOW);
    	    	              DIO_voidSetPortValue(DIO_PORTD,0b00000000);
    	    	              _delay_ms(400);
    	    	              break;





    	 }







     }






}

