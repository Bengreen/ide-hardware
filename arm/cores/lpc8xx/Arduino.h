#ifndef Arduino_h
#define Arduino_h

const int INPUT = 0;
const int OUTPUT = 1;

const int LOW = 0;
const int HIGH = 1;

extern void setup ();
extern void loop ();

extern void pinMode (int pin, int mode);
extern int digitalRead (int pin);
extern void digitalWrite (int pin, int level);
extern void delay (int ms);
extern unsigned millis ();

#endif
