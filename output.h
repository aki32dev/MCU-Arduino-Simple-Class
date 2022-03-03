#ifndef IO_H
#define IO_H
#include <WiFi.h>

class IO{
    public:
        IO(byte pin);  
        void onLED();
        void offLED();

    private:
        byte ledPin;
};

#endif        