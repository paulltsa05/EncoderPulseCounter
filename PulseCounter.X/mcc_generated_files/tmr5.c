/**
  TMR5 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    tmr5.c

  @Summary
    This is the generated driver implementation file for the TMR5 driver using MPLAB(c) Code Configurator

  @Description
    This source file provides APIs for TMR5.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC16F18344
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "tmr5.h"

/**
  Section: Global Variables Definitions
*/
volatile uint16_t timer5ReloadVal;
void (*TMR5_InterruptHandler)(void);

/**
  Section: TMR5 APIs
*/

void TMR5_Initialize(void)
{
    //Set the Timer to the options selected in the GUI

    //T5CKPS 1:8; T5SOSC T5CKI_enabled; T5SYNC synchronize; TMR5CS FOSC; TMR5ON off; 
    T5CON = 0x70;

    //T5GSS T5G; TMR5GE disabled; T5GTM disabled; T5GPOL low; T5GGO_nDONE done; T5GSPM disabled; 
    T5GCON = 0x00;

    //TMR5H 255; 
    TMR5H = 0xFF;

    //TMR5L 216; 
    TMR5L = 0xD8;

    // Load the TMR value to reload variable
    timer5ReloadVal=(TMR5H << 8) | TMR5L;

    // Clearing IF flag.
    PIR4bits.TMR5IF = 0;

    // Start TMR5
    TMR5_StartTimer();
}

void TMR5_StartTimer(void)
{
    // Start the Timer by writing to TMRxON bit
    T5CONbits.TMR5ON = 1;
}

void TMR5_StopTimer(void)
{
    // Stop the Timer by writing to TMRxON bit
    T5CONbits.TMR5ON = 0;
}

uint16_t TMR5_ReadTimer(void)
{
    uint16_t readVal;

    readVal = (TMR5H << 8) | TMR5L;

    return readVal;
}

void TMR5_WriteTimer(uint16_t timerVal)
{
    if (T5CONbits.T5SYNC == 1)
    {
        // Stop the Timer by writing to TMRxON bit
        T5CONbits.TMR5ON = 0;

        // Write to the Timer5 register
        TMR5H = (timerVal >> 8);
        TMR5L = timerVal;

        // Start the Timer after writing to the register
        T5CONbits.TMR5ON =1;
    }
    else
    {
        // Write to the Timer5 register
        TMR5H = (timerVal >> 8);
        TMR5L = timerVal;
    }
}

void TMR5_Reload(void)
{
    //Write to the Timer5 register
    TMR5H = (timer5ReloadVal >> 8);
    TMR5L = timer5ReloadVal;
}

void TMR5_StartSinglePulseAcquisition(void)
{
    T5GCONbits.T5GGO_nDONE = 1;
}

uint8_t TMR5_CheckGateValueStatus(void)
{
    return (T5GCONbits.T5GVAL);
}

bool TMR5_HasOverflowOccured(void)
{
    // check if  overflow has occurred by checking the TMRIF bit
    return(PIR4bits.TMR5IF);
}
/**
  End of File
*/