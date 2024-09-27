#ifndef ISR_H
#define ISR_H

#include <Arduino.h>

// variabile di conteggio degli eventi, condivisa
extern volatile int interruptCounter;

// file degli header delle function

// declaration of the interrupt handling routine on falling of upPin
void IRAM_ATTR handleInterruptUp();

// declaration of the interrupt handling routine on falling of downPin
void IRAM_ATTR handleInterruptDown();

#endif
