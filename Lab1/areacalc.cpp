#include "areacalc.h"
#include <cmath>

areaCalc::areaCalc() {}

double areaCalc::squareArea(double side) {
    return side * side;
}

double areaCalc::rectangleArea(double length, double width) {
    return length * width;
}

double areaCalc::parallelogramArea(double base, double height) {
    return base * height;
}

double areaCalc::rhombusArea(double diagonal1, double diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}

double areaCalc::triangleArea(double base, double height) {
    return (base * height) / 2;
}

double areaCalc::trapezoidArea(double base1, double base2, double height) {
    return ((base1 + base2) * height) / 2;
}

double areaCalc::circleArea(double radius) {
    return M_PI * radius * radius;
}

double areaCalc::sectorArea(double radius, double angle) {
    return (angle / 360.0) * M_PI * radius * radius;
}
