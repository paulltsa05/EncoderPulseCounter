/* 
 * File:   word.h
 * Author: kpit
 *
 * Created on February 18, 2017, 2:36 AM
 */
//#include <stdbool.h>
#ifndef WORD_H
#define	WORD_H

#ifdef	__cplusplus
extern "C" {
#endif

/** @ingroup util_word
    Return low word of a 32-bit integer.

    @param uint32_t ww (0x00000000..0xFFFFFFFF)
    @return low word of input (0x0000..0xFFFF)
*/
static inline uint16_t lowWord(uint32_t ww)
{
  return (uint16_t) ((ww) & 0xFFFF);
}


/** @ingroup util_word
    Return high word of a 32-bit integer.

    @param uint32_t ww (0x00000000..0xFFFFFFFF)
    @return high word of input (0x0000..0xFFFF)
*/
static inline uint16_t highWord(uint32_t ww)
{
  return (uint16_t) ((ww) >> 16);
}

static inline uint8_t highByte(uint16_t ww)
{
  return (uint8_t) ((ww) >> 8);
}

static inline uint8_t lowByte(uint16_t ww)
{
  return (uint8_t) ((ww) & 0xFF);
}

static inline bool bitRead(uint8_t ww,uint8_t pos)
{
    return (bool) (((ww)>>pos) & 0x01);
}

//void bitWrite(uint16_t *dest,uint8_t index,bool bitval)
//{
////    if(bitval)
////        *(dest)&=
//    return *(dest);
//}

#ifdef	__cplusplus
}
#endif

#endif	/* WORD_H */

