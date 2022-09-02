#include "colorcanvas.h"

void ColorCanvas::initializeColorCanvas() {
    // Task 6: initialize a 10 x 10 colorful canvas where each pixel has an
    //         RGBA value of (0, 123, 123, 255)

    // Task 8: call the drawFlower() function to display the canvas with
    //         a couple of flowers
}

int ColorCanvas::posToIndex(int x, int y) {
    // Task 7: convert an (x, y) position into an index you
    //         can use to index into the array of canvas data

    return 0;
}

void ColorCanvas::drawFlower(int x, int y) {
    // Task 8: draw flowers on your canvas. The inputs of this function are
    //         the x and y coordinates of the center of the flower
}

void ColorCanvas::mouseDown(int x, int y) {
    // Task 10: color the pixel corresponding to the inputted (x, y) coordinate
    //          of the canvas to handle when the mouse is clicked
}

void ColorCanvas::mouseMove(int x, int y) {
    // Task 9: color the pixel corresponding to the inputted (x, y) coordinate
    //         of the canvas to handle mouse movement

    // Task 10: update this function from the previous task so that the coloring
    //          of the canvas only happens when the mouse is first pressed
}

void ColorCanvas::mouseUp(int x, int y) {
    // Task 10: update the variable that keeps track of whether the mouse has
    //          been clicked
}
