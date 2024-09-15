#ifndef AREACALC_H
#define AREACALC_H

class areaCalc
{
public:
    areaCalc();

    double squareArea(double side);
    double rectangleArea(double length, double width);
    double parallelogramArea(double base, double height);
    double rhombusArea(double diagonal1, double diagonal2);
    double triangleArea(double base, double height);
    double trapezoidArea(double base1, double base2, double height);
    double circleArea(double radius);
    double sectorArea(double radius, double angle);
};

#endif // AREACALC_H
