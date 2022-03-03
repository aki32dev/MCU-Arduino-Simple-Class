#include "output.h"

IO::IO(byte pin){
    this->ledPin = pin;
    pinMode(ledPin, OUTPUT);
    offLED();
}

void IO::onLED(){
    digitalWrite(ledPin, HIGH);
}

void IO::offLED(){
    digitalWrite(ledPin, LOW);
}