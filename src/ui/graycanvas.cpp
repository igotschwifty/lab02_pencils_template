#include <cmath>
#include "graycanvas.h"
#include <iostream>

uint8_t GrayCanvas::floatToInt(float intensity) {
    // Task 3: convert a float into a uint8_t
    return round(intensity * 255);
}

void GrayCanvas::initializeGrayCanvas() {
    // Task 4: initialize a 10 x 10 gray canvas where each pixel has an
    //         intensity of 0.123
    std::vector<uint8_t> values(100);
    uint8_t intensity = floatToInt(0.123);
    std::fill(values.begin(), values.end(), intensity);
    m_canvasData = values;

    // Task 5: call the createHeart() function to display the canvas with
    //         the white heart
    createHeart();
}

void GrayCanvas::createHeart() {
    // Task 5: create a heart on the canvas by turning certain pixels white
    //         so it matches the canvas in the handout
    m_canvasData[23] = floatToInt(1.0);
    m_canvasData[24] = floatToInt(1.0);
    m_canvasData[26] = floatToInt(1.0);
    m_canvasData[27] = floatToInt(1.0);
    m_canvasData[32] = floatToInt(1.0);
    m_canvasData[35] = floatToInt(1.0);
    m_canvasData[38] = floatToInt(1.0);
    m_canvasData[42] = floatToInt(1.0);
    m_canvasData[48] = floatToInt(1.0);
    m_canvasData[53] = floatToInt(1.0);
    m_canvasData[57] = floatToInt(1.0);
    m_canvasData[64] = floatToInt(1.0);
    m_canvasData[66] = floatToInt(1.0);
    m_canvasData[75] = floatToInt(1.0);
}
