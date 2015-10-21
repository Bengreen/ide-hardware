#include "HardwareSerial.h"
#include "LPC8xx.h"
#include "uart_irq.h"

HardwareSerial Serial;

void HardwareSerial::begin (int baud) {
    LPC_SWM->PINASSIGN0 = 0xFFFF0004;
    uart0Init(baud);
}

int HardwareSerial::read () {
    return uart0RecvChar();
}

int HardwareSerial::available () {
    return !rxBuf.isEmpty();
}

int HardwareSerial::peek () {
    return -1;
}

size_t HardwareSerial::write (unsigned char ch) {
    uart0SendChar(ch);
    return 1;
}

void HardwareSerial::flush () {
    while (!txBuf.isEmpty())
        ;
}
