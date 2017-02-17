/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC16F18344
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set TEMP_RA2 aliases
#define TEMP_RA2_TRIS               TRISAbits.TRISA2
#define TEMP_RA2_LAT                LATAbits.LATA2
#define TEMP_RA2_PORT               PORTAbits.RA2
#define TEMP_RA2_WPU                WPUAbits.WPUA2
#define TEMP_RA2_OD                ODCONAbits.ODCA2
#define TEMP_RA2_ANS                ANSELAbits.ANSA2
#define TEMP_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define TEMP_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define TEMP_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define TEMP_RA2_GetValue()           PORTAbits.RA2
#define TEMP_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define TEMP_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define TEMP_RA2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define TEMP_RA2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define TEMP_RA2_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define TEMP_RA2_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define TEMP_RA2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define TEMP_RA2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RS_485_RX_RB4 aliases
#define RS_485_RX_RB4_TRIS               TRISBbits.TRISB4
#define RS_485_RX_RB4_LAT                LATBbits.LATB4
#define RS_485_RX_RB4_PORT               PORTBbits.RB4
#define RS_485_RX_RB4_WPU                WPUBbits.WPUB4
#define RS_485_RX_RB4_OD                ODCONBbits.ODCB4
#define RS_485_RX_RB4_ANS                ANSELBbits.ANSB4
#define RS_485_RX_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RS_485_RX_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RS_485_RX_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RS_485_RX_RB4_GetValue()           PORTBbits.RB4
#define RS_485_RX_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RS_485_RX_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RS_485_RX_RB4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define RS_485_RX_RB4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define RS_485_RX_RB4_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define RS_485_RX_RB4_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define RS_485_RX_RB4_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define RS_485_RX_RB4_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RS_485_TX_RB5 aliases
#define RS_485_TX_RB5_TRIS               TRISBbits.TRISB5
#define RS_485_TX_RB5_LAT                LATBbits.LATB5
#define RS_485_TX_RB5_PORT               PORTBbits.RB5
#define RS_485_TX_RB5_WPU                WPUBbits.WPUB5
#define RS_485_TX_RB5_OD                ODCONBbits.ODCB5
#define RS_485_TX_RB5_ANS                ANSELBbits.ANSB5
#define RS_485_TX_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RS_485_TX_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RS_485_TX_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RS_485_TX_RB5_GetValue()           PORTBbits.RB5
#define RS_485_TX_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RS_485_TX_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RS_485_TX_RB5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define RS_485_TX_RB5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define RS_485_TX_RB5_SetPushPull()    do { ODCONBbits.ODCB5 = 1; } while(0)
#define RS_485_TX_RB5_SetOpenDrain()   do { ODCONBbits.ODCB5 = 0; } while(0)
#define RS_485_TX_RB5_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define RS_485_TX_RB5_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RS485_EN_RB6 aliases
#define RS485_EN_RB6_TRIS               TRISBbits.TRISB6
#define RS485_EN_RB6_LAT                LATBbits.LATB6
#define RS485_EN_RB6_PORT               PORTBbits.RB6
#define RS485_EN_RB6_WPU                WPUBbits.WPUB6
#define RS485_EN_RB6_OD                ODCONBbits.ODCB6
#define RS485_EN_RB6_ANS                ANSELBbits.ANSB6
#define RS485_EN_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RS485_EN_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RS485_EN_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RS485_EN_RB6_GetValue()           PORTBbits.RB6
#define RS485_EN_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RS485_EN_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RS485_EN_RB6_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define RS485_EN_RB6_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define RS485_EN_RB6_SetPushPull()    do { ODCONBbits.ODCB6 = 1; } while(0)
#define RS485_EN_RB6_SetOpenDrain()   do { ODCONBbits.ODCB6 = 0; } while(0)
#define RS485_EN_RB6_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define RS485_EN_RB6_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set REDLED_RC0 aliases
#define REDLED_RC0_TRIS               TRISCbits.TRISC0
#define REDLED_RC0_LAT                LATCbits.LATC0
#define REDLED_RC0_PORT               PORTCbits.RC0
#define REDLED_RC0_WPU                WPUCbits.WPUC0
#define REDLED_RC0_OD                ODCONCbits.ODCC0
#define REDLED_RC0_ANS                ANSELCbits.ANSC0
#define REDLED_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define REDLED_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define REDLED_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define REDLED_RC0_GetValue()           PORTCbits.RC0
#define REDLED_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define REDLED_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define REDLED_RC0_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define REDLED_RC0_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define REDLED_RC0_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define REDLED_RC0_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define REDLED_RC0_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define REDLED_RC0_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set GREENLED_RC1 aliases
#define GREENLED_RC1_TRIS               TRISCbits.TRISC1
#define GREENLED_RC1_LAT                LATCbits.LATC1
#define GREENLED_RC1_PORT               PORTCbits.RC1
#define GREENLED_RC1_WPU                WPUCbits.WPUC1
#define GREENLED_RC1_OD                ODCONCbits.ODCC1
#define GREENLED_RC1_ANS                ANSELCbits.ANSC1
#define GREENLED_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define GREENLED_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define GREENLED_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define GREENLED_RC1_GetValue()           PORTCbits.RC1
#define GREENLED_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define GREENLED_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define GREENLED_RC1_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define GREENLED_RC1_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define GREENLED_RC1_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define GREENLED_RC1_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define GREENLED_RC1_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define GREENLED_RC1_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set BLUELED_RC2 aliases
#define BLUELED_RC2_TRIS               TRISCbits.TRISC2
#define BLUELED_RC2_LAT                LATCbits.LATC2
#define BLUELED_RC2_PORT               PORTCbits.RC2
#define BLUELED_RC2_WPU                WPUCbits.WPUC2
#define BLUELED_RC2_OD                ODCONCbits.ODCC2
#define BLUELED_RC2_ANS                ANSELCbits.ANSC2
#define BLUELED_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BLUELED_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BLUELED_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BLUELED_RC2_GetValue()           PORTCbits.RC2
#define BLUELED_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BLUELED_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BLUELED_RC2_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define BLUELED_RC2_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define BLUELED_RC2_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define BLUELED_RC2_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define BLUELED_RC2_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define BLUELED_RC2_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set BUZZER_RC3 aliases
#define BUZZER_RC3_TRIS               TRISCbits.TRISC3
#define BUZZER_RC3_LAT                LATCbits.LATC3
#define BUZZER_RC3_PORT               PORTCbits.RC3
#define BUZZER_RC3_WPU                WPUCbits.WPUC3
#define BUZZER_RC3_OD                ODCONCbits.ODCC3
#define BUZZER_RC3_ANS                ANSELCbits.ANSC3
#define BUZZER_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define BUZZER_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define BUZZER_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define BUZZER_RC3_GetValue()           PORTCbits.RC3
#define BUZZER_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define BUZZER_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define BUZZER_RC3_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define BUZZER_RC3_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define BUZZER_RC3_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define BUZZER_RC3_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define BUZZER_RC3_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define BUZZER_RC3_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()     do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()   do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode() do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()    do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()   do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()   do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()         PORTCbits.RC5
#define RC5_SetDigitalInput()   do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()  do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()     do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()   do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode() do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set FAN_RC6 aliases
#define FAN_RC6_TRIS               TRISCbits.TRISC6
#define FAN_RC6_LAT                LATCbits.LATC6
#define FAN_RC6_PORT               PORTCbits.RC6
#define FAN_RC6_WPU                WPUCbits.WPUC6
#define FAN_RC6_OD                ODCONCbits.ODCC6
#define FAN_RC6_ANS                ANSELCbits.ANSC6
#define FAN_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define FAN_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define FAN_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define FAN_RC6_GetValue()           PORTCbits.RC6
#define FAN_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define FAN_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define FAN_RC6_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define FAN_RC6_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define FAN_RC6_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define FAN_RC6_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define FAN_RC6_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define FAN_RC6_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/