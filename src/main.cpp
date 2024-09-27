/*
 * Esempio: gestione di un interrupt esterno sul pin 23
 */
#include <Arduino.h>
#include <ISR/isr.h>

const byte upPin = 23;
const byte downPin = 15;

extern volatile int interruptCounter;
int numberOfInterrupts = 0;


void setup()
{
  Serial.begin(115200);
  Serial.println("Monitoring up/down interrupts: ");

  pinMode(upPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(upPin), handleInterruptUp, FALLING);

  pinMode(downPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(downPin), handleInterruptDown, FALLING);
}

void loop()
{
  if (interruptCounter > 0)
  {
    numberOfInterrupts += interruptCounter;
    interruptCounter = 0;
    Serial.print("An interrupt has occurred. Total: ");
    Serial.println(numberOfInterrupts);
  }
}



