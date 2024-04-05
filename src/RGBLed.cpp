#include <Arduino.h>
#include "RGBLed.h" 

Led::Led(int redPin, int greenPin, int bluePin) {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    redPin_ = redPin;
    greenPin_ = greenPin;
    bluePin_ = bluePin;
}

void Led::setR(const int r) {
    analogWrite(redPin_, r);
}

void Led::setG(const int g) {
    analogWrite(greenPin_, g);
}

void Led::setB(const int b) {
    analogWrite(bluePin_, b);
}

void Led::setColor(const RGBColor color) {
    setR(color.red);
    setG(color.green);
    setB(color.blue);
}

void Led::setColor(const int r, const int g, const int b) {
    setR(r);
    setG(g);
    setB(b);
}
/**
 * @brief This simulates a heart beat ( LUB and DUB ) with the LED (Two flashes)
*/
void Led::heartBeat(const int bpm, const RGBColor color) {
    float rr_interval_duration = 60000  / bpm;
    float pause_between_systole = (0.35 * 1000) / 2;
    float pause_duration_between_full_cycle = rr_interval_duration - (pause_between_systole * 2);

    // Lub and DUb
    setColor(255, 0, 0);
    delay(pause_between_systole);
    setColor(0, 0, 0);
    delay(pause_between_systole);
    setColor(80,0,0);
    delay(pause_duration_between_full_cycle);
    setColor(0, 0, 0);

    
}