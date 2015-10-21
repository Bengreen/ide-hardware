#include "Stream.h"

class HardwareSerial : public Stream {
public:
    void begin (int baud);

    virtual int available ();
    virtual int peek ();
    virtual int read ();
    virtual void flush ();

    virtual size_t write (uint8_t);
    //inline size_t write (unsigned long n) { return write((uint8_t)n); }
    //inline size_t write (long n) { return write((uint8_t)n); }
    //inline size_t write (unsigned int n) { return write((uint8_t)n); }
    //inline size_t write (int n) { return write((uint8_t)n); }
    using Print::write;

    operator bool () const { return true; }
};

extern HardwareSerial Serial;
