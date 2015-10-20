#include "LPC8xx.h"
#include "Arduino.h"

volatile unsigned msCounter;

extern "C" void SysTick_Handler () {
    ++msCounter;
}

int main () {
    SysTick_Config(12000);
    setup();
    while (true)
        loop();
    return 0;
}

void pinMode (int pin, int mode) {
    if (mode == OUTPUT)
        LPC_GPIO_PORT->DIR0 |= 1<<pin;
    else
        LPC_GPIO_PORT->DIR0 &= ~(1<<pin);
}

int digitalRead (int pin) {
    return LPC_GPIO_PORT->B0[pin];
}

void digitalWrite (int pin, int level) {
    LPC_GPIO_PORT->B0[pin] = level != 0;
}

unsigned millis () {
    return msCounter;
}

void delay (int ms) {
    unsigned start = msCounter;
    while (msCounter - start < ms)
        __WFI();
}
