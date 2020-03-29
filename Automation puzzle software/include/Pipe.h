#pragma once

#include <arduino.h>
#include "Adafruit_NeoPixel.h"
#include "ToggleSwitch.h"

#define NO_PIXEL_BITS (uint64_t)(0);
#define PIXEL_0_BIT (uint64_t)((uint64_t)1 << 0)
#define PIXEL_1_BIT (uint64_t)((uint64_t)1 << 1)
#define PIXEL_2_BIT (uint64_t)((uint64_t)1 << 2)
#define PIXEL_3_BIT (uint64_t)((uint64_t)1 << 3)
#define PIXEL_4_BIT (uint64_t)((uint64_t)1 << 4)
#define PIXEL_5_BIT (uint64_t)((uint64_t)1 << 5)
#define PIXEL_6_BIT (uint64_t)((uint64_t)1 << 6)
#define PIXEL_7_BIT (uint64_t)((uint64_t)1 << 7)
#define PIXEL_8_BIT (uint64_t)((uint64_t)1 << 8)
#define PIXEL_9_BIT (uint64_t)((uint64_t)1 << 9)
#define PIXEL_10_BIT (uint64_t)((uint64_t)1 << 10)
#define PIXEL_11_BIT (uint64_t)((uint64_t)1 << 11)
#define PIXEL_12_BIT (uint64_t)((uint64_t)1 << 12)
#define PIXEL_13_BIT (uint64_t)((uint64_t)1 << 13)
#define PIXEL_14_BIT (uint64_t)((uint64_t)1 << 14)
#define PIXEL_15_BIT (uint64_t)((uint64_t)1 << 15)
#define PIXEL_16_BIT (uint64_t)((uint64_t)1 << 16)
#define PIXEL_17_BIT (uint64_t)((uint64_t)1 << 17)
#define PIXEL_18_BIT (uint64_t)((uint64_t)1 << 18)
#define PIXEL_19_BIT (uint64_t)((uint64_t)1 << 19)
#define PIXEL_20_BIT (uint64_t)((uint64_t)1 << 20)
#define PIXEL_21_BIT (uint64_t)((uint64_t)1 << 21)
#define PIXEL_22_BIT (uint64_t)((uint64_t)1 << 22)
#define PIXEL_23_BIT (uint64_t)((uint64_t)1 << 23)
#define PIXEL_24_BIT (uint64_t)((uint64_t)1 << 24)
#define PIXEL_25_BIT (uint64_t)((uint64_t)1 << 25)
#define PIXEL_26_BIT (uint64_t)((uint64_t)1 << 26)
#define PIXEL_27_BIT (uint64_t)((uint64_t)1 << 27)
#define PIXEL_28_BIT (uint64_t)((uint64_t)1 << 28)
#define PIXEL_29_BIT (uint64_t)((uint64_t)1 << 29)
#define PIXEL_30_BIT (uint64_t)((uint64_t)1 << 30)
#define PIXEL_31_BIT (uint64_t)((uint64_t)1 << 31)
#define PIXEL_32_BIT (uint64_t)((uint64_t)1 << 32)
#define PIXEL_33_BIT (uint64_t)((uint64_t)1 << 33)
#define PIXEL_34_BIT (uint64_t)((uint64_t)1 << 34)
#define PIXEL_35_BIT (uint64_t)((uint64_t)1 << 35)
#define PIXEL_36_BIT (uint64_t)((uint64_t)1 << 36)
#define PIXEL_37_BIT (uint64_t)((uint64_t)1 << 37)
#define PIXEL_38_BIT (uint64_t)((uint64_t)1 << 38)
#define PIXEL_39_BIT (uint64_t)((uint64_t)1 << 39)
#define PIXEL_40_BIT (uint64_t)((uint64_t)1 << 40)
#define PIXEL_41_BIT (uint64_t)((uint64_t)1 << 41)
#define PIXEL_42_BIT (uint64_t)((uint64_t)1 << 42)
#define PIXEL_43_BIT (uint64_t)((uint64_t)1 << 43)
#define PIXEL_44_BIT (uint64_t)((uint64_t)1 << 44)
#define PIXEL_45_BIT (uint64_t)((uint64_t)1 << 45)
#define PIXEL_46_BIT (uint64_t)((uint64_t)1 << 46)
#define PIXEL_47_BIT (uint64_t)((uint64_t)1 << 47)
#define PIXEL_48_BIT (uint64_t)((uint64_t)1 << 48)
#define PIXEL_49_BIT (uint64_t)((uint64_t)1 << 49)
#define PIXEL_50_BIT (uint64_t)((uint64_t)1 << 50)
#define PIXEL_51_BIT (uint64_t)((uint64_t)1 << 51)
#define PIXEL_52_BIT (uint64_t)((uint64_t)1 << 52)

typedef struct{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
}Color;

class Pipe
{
private:
    /* data */
    static const int UPDATE_DELAY = 333;

    uint64_t lastUpdateTime = 0;

    int8_t currentPixel = 0;

    static uint64_t PIXEL_BANK;
    Adafruit_NeoPixel * neoPixel;

    uint64_t ownedPixels;

    Color pipeColor;
    Color outColor;

    bool isReverseDirection = false;

    void set_pipe_color(Color color); 
    void move_current_pixel();
    void reset_current_pixel();

public:

public:
    Pipe(/* args */);
    ~Pipe();

    void begin(uint64_t pixels, Adafruit_NeoPixel * neoPixel, bool isReverseDirection);

    void set_color_by_valve(VALVE_BIT valve, Pipe connectedPipe);
    void set_color_by_valve(VALVE_BIT valve, Color color);

    void set_color_by_extension(Pipe pipeToExtend);

    void set_color_by_mix(Pipe pipe1, Pipe pipe2);
};

