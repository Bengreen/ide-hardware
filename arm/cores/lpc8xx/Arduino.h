#ifndef Arduino_h
#define Arduino_h

const int INPUT = 0;
const int OUTPUT = 1;

const int LOW = 0;
const int HIGH = 1;

extern "C" void setup ();
extern "C" void loop ();

extern "C" void pinMode (int pin, int mode);
extern "C" int digitalRead (int pin);
extern "C" void digitalWrite (int pin, int level);
extern "C" void delay (int ms);
extern "C" unsigned millis ();

#endif
