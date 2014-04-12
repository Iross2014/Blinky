#include <stdio.h> 
#include <stdint.h>
#include "STM32F4xx.h" 
#include "LED.h"

/*--------------------------------------------------------- 
 MAIN function 
 *---------------------------------------------------------*/ 
void SysTick_Handler (void) {
  static uint32_t ticks;

  switch (ticks++) {
    case 10:
      LED_On(0);
      break;
    case 20:
      LED_Off(0);
		  ticks = 0;
      break;
    default:
      if (ticks > 20) {
        ticks = 0;
      }
  }

}

int main (void) 
{ 
	LED_Initialize();
	SysTick_Config(SystemCoreClock / 100);     /* Generate interrupt each 10 ms */
	while (1)
	{
		;
	}
} 
