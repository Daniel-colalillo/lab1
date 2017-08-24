/*
* FileName: main.c
*
* Name: Lab1, PIC24 Oscillator configuration and GitHub with MPLABX IDE
*
* Description: a short program to toggle an led
*
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author Date Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Danie Colalillo 8/24/2017 v1.0.0 
* 
* .set up code configurator for frc clock source, pll on, 16mhz fcy and fosc of 
* 32 mhz
* .used lata and tris to both set and write to pin a7.
*
*
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include "mcc_generated_files/mcc.h"
#include "xc.h"

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
 _TRISA7 = 0;// set porta7 as an output
 
    while (1)
    {

        _LATA7 = _LATA7^1;// toggle prt a7between on and off
   
    }
}
/**
 End of File
*/