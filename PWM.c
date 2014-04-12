/*----------------------------------------------------------------------------
 * Name:    PWM.c\
 * Author: Ian Ross
 * Purpose: low level PWM functionality
 * Note(s):
 * 
 *----------------------------------------------------------------------------*/

#include "STM32F4xx.h"
#include "PWM.h"


// Program some initial input capture code

// Set TIMx_CCR1 to TI1 input, set CC1S bits to 01

// Program input filter duration (# of cycles to ignore), check IC1F in TIMx_CCMR1

// Select edge of active transition on TI1 by writing CC1P and CC1NP bits in the TIMx_CCER register

// Program input prescaler

// Enable capture from counter into counter register by setting CC1E bit in TIMx_CCER register

// If needed, enable DMA/INTerrupts by setting CC1[D/I]E bits in TIMx_DIER register

// When an input capture occurs: TIMx_CCR1 register will have value of counter at transition
// CC1IF flag is set...interrupt generated, DMA generated

// For PWM input we do the same but with two opposite polarity counters and then compare them
// See 18.3.6 in DM00031020 PDF