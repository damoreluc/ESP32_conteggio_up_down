#include <ISR/isr.h>

// definition of the interrupt handling routine
void IRAM_ATTR handleInterruptUp()
{
  interruptCounter++;
}