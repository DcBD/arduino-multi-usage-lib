#ifndef RGBLed_H_
#define RGBLed_H_
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
    void heartBeat(const int bpm, const RGBColor color);
private:
    int redPin_;
    int greenPin_;
    int bluePin_;
};





#endif