/* 
 * File:   Circle.h
 * Author: smajerci
 *
 * Created on February 16, 2015, 10:26 AM
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

#include <math.h>

class Circle {
    
public:
    Circle();
    Circle(double radius); 
    Circle(double radius, double centerX, double centerY);
    double getRadius() { return radius; }
    double getDiameter() { return radius * 2; }
    double getCircumference() { return M_PI * radius * 2; }
    double getArea() { return M_PI * radius * radius; }

    void setRadius(double radius);
    void moveCircle(double centerX, double centerY);
    void printCircle();
      
private:
    static const int MAX_RADIUS = 100;
    
    double centerX;
    double centerY;
    double radius;
    
};

#endif	/* CIRCLE_H */

