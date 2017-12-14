#include "Animation.h"

#ifndef RAINBOW_H
#define RAINBOW_H

class Rainbow : public Animation {
public:
    Rainbow(int rows, int cols, Neopixel* strip) : Animation(rows, cols, strip){}
    void animate(float t, float dt);
    void buttonPress(uint8_t count);
    void dialRotate(uint8_t buttonClicks, int8_t dialClicks);
};

#endif
