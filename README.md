# Interrupt sul cambio di stato dei pin

Rilevare i fronti di discesa sul pin 23 e sul pin 15 della ESP32. 

Ogni fronte di discesa sul pin 23 provoca l'incremento di una variabile di conteggio (intera a 32 bit), mentre ciascun fronte di discesa sul pin 15 provoca il decremento della stessa variabile di conteggio.

Nella loop() aggiornare la stampa dopo ogni evento intercettato dalle due ISR.
