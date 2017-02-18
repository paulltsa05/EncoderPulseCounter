/* 
 * File:   main.h
 * Author: kpit
 *
 * Created on February 18, 2017, 4:46 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif


//Interrupt Function callback
//void EncA_PulseEdgeEvent(uint16_t capturedValue);
//void EncB_PulseEdgeEvent(uint16_t capturedValue);
void EncINX_PulseRisingEvent();

void Timer0_tick10msecFunc();


#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

