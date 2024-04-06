#ifndef ArduinoMultiUsage_H_
#define ArduinoMultiUsage_H_
#include <Arduino.h>

struct RGBColor
{
    int red;
    int green;
    int blue;
};

class Led {
public:
    Led(int redPin, int greenPin, int bluePin);
    void setColor(const RGBColor color);
    void setColor(const int r, const int g, const int b);
    void setR(const int r);
    void setG(const int g); 
    void setB(const int b);
private:
    int redPin_;
    int greenPin_;
    int bluePin_;
};

class Motor {
public:
    Motor(int pin);
    void setSpeed(int speed);

private:
    int pin_;
};

void cardiacCycle(const int bpm, void (*lub)(), void afterLub(), void (*dub)(), void afterDub());





#endif