/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
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

#include "mcc_generated_files/mcc.h"
#include "ModbusManager.h"
#include "main.h"
#include "LED_Ctrl.h"

/*
                         Main application
 */
unsigned int OldEncPulseOpState=IDLE;

void EPC_StateMachineControlLoop();

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    TMR3_WriteTimer(0);//reset TMR3
    TMR3_StopTimer();//Stop TMR3
    TMR5_WriteTimer(0);//reset TMR5
    TMR5_StopTimer();//Stop TMR5
    
    ModbusMasterSetup();
    EncPulseOpState=IDLE;

    while (1)
    {
        // Add your application code
       // EPC_StateMachineControlLoop();
    }
}

void EPC_StateMachineControlLoop() //call the statemachine in main loop
{
    switch (EncPulseOpState)
    {
        case IDLE       :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
                        break;
        case EnALoEnBLo :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
            
                        break;
        case EnAHiEnBLo :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
            
                        break;
        case EnAHiEnBHi :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
            
                        break;
        case EnALoEnBHi :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
            
                        break;
        case EncError   :   if(EncPulseOpState != OldEncPulseOpState)//entry
                            {   //Entry code here
            
            
                            }
                            else
                            {   //during state
            
                            }    
            
                            OldEncPulseOpState=EncPulseOpState;
            
                        break;
        default: break;
    }        
}

//Interrupt trigger function call
void EncA_PulseEdgeEvent(uint16_t capturedValue)
{
    TMR3_WriteTimer(0);
    TMR3_StartTimer();//Start if not started TMR3
    if(ENC_A_RC5_GetValue())// rising uses timer 3 & CCP1
    {
        
    }
    else//falling
    {
        
    }
    
}
void EncB_PulseEdgeEvent(uint16_t capturedValue)
{
    TMR5_WriteTimer(0);
    TMR5_StartTimer();//Start if not started TMR5
    if(ENC_B_RC4_GetValue())// rising uses timer 5 & CCP2
    {
        
    }
    else//falling
    {
        
    }
    
}

void EncINX_PulseRisingEvent()
{   //on rising only 
    
}

void Timer0_tick10msecFunc()//call every 10msec
{
    LedON_Control_10msec();
}

/**
 End of File
*/