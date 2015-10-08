#ifndef Arduino_h
#define Arduino_h

#define INPUT 0
#define OUTPUT 1

#define LOW 0
#define HIGH 1

extern void pinMode (int pin, int mode);
extern void digitalWrite (int pin, int level);
extern void delay (int ms);

#endif
