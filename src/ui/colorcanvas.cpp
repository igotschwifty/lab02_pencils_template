#include "colorcanvas.h"
#include "RGBA.h"

void ColorCanvas::initializeColorCanvas() {

    // Task 6: initialize a 10 x 10 colorful canvas where each pixel has an
    //         RGBA value of (0, 123, 123, 255)
    std::vector<RGBA> values(100);
    RGBA value = RGBA{0, 123, 123, 255};
    std::fill(values.begin(), values.end(), value);
    m_canvasData = values;

    // Task 8: call the drawFlower() function to display the canvas with
    //         a couple of flowers
    drawFlower(3,3);
    drawFlower(0,0);
    drawFlower(9,3);
    drawFlower(9,9);
}

int ColorCanvas::posToIndex(int x, int y) {
    // Task 7: convert an (x, y) position into an index you
    //         can use to index into the array of canvas data
    return y*10 + x;
}

void ColorCanvas::drawFlower(int x, int y) {
    // Task 8: draw flowers on your canvas. The inputs of this function are
    //         the x and y coordinates of the center of the flower
    m_canvasData[posToIndex(x,y)] = RGBA{255,255,255,255};
    if (x < 9) {
        m_canvasData[posToIndex(x+1,y)] = RGBA{200,100,255,255};
    }
    if (x > 0) {
        m_canvasData[posToIndex(x-1,y)] = RGBA{200,100,255,255};
    }
    if (y < 9) {
            m_canvasData[posToIndex(x,y+1)] = RGBA{200,100,255,255};
    }
    if (y > 0) {
        m_canvasData[posToIndex(x,y-1)] = RGBA{200,100,255,255};
    }
}

void ColorCanvas::mouseDown(int x, int y) {
    // Task 10: update the variable that keeps track of whether the LMB is being
    //          held down, then color the pixel corresponding to the input (x, y)
    //          coordinate, if within canvas bounds
    m_isDown = true;
}

void ColorCanvas::mouseMove(int x, int y) {
    // Task 9: color the pixel corresponding to the input (x, y) coordinate, if
    //         within canvas bounds
//    if (x <= 9 & x >= 0 & y <= 9 & y >= 0 ) {
//       m_canvasData[posToIndex(x,y)] = m_pencilColor;
//    }
    // Task 10: update this function from the previous task so that the coloring
    //          of the canvas only happens if the LMB is being held down
    if (x <= 9 & x >= 0 & y <= 9 & y >= 0 & m_isDown) {
       m_canvasData[posToIndex(x,y)] = m_pencilColor;
    }
}

void ColorCanvas::mouseUp(int x, int y) {
    // Task 10: update the variable that keeps track of whether the LMB is being
    //          held down
    m_isDown = false;
}
