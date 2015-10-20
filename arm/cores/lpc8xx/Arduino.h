#ifndef Arduino_h
#define Arduino_h

#define INPUT 0
#define OUTPUT 1

#define LOW 0
#define HIGH 1

extern "C" void setup ();
extern "C" void loop ();

extern "C" void pinMode (int pin, int mode);
extern "C" int digitalRead (int pin);
extern "C" void digitalWrite (int pin, int level);
extern "C" void delay (int ms);
extern "C" unsigned millis ();

#endif
