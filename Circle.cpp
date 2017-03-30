/* 
 * File:   Circle.cpp
 * Author: smajerci
 * 
 * Created on February 16, 2015, 10:26 AM
 */

#include <iostream>
#include "Circle.h"

using namespace std;

// default constructor sets everything to 0.0
Circle::Circle() {
    radius = 0.0;
    centerX = 0.0;
    centerY = 0.0;
}

// user provides radius, but coordinate of center default to (0,0)
Circle::Circle(double radius) {
    setRadius(radius);
    centerX = 0.0;
    centerY = 0.0;
}


// user provides radius and coordinates of center
Circle::Circle(double radius, double centerX, double centerY) {
    setRadius(radius);
    this->centerX = centerX;
    this->centerY = centerY;
}



// reset the radius, making sure that the new radius is not negative
// and that it does not exceed the maximum allowed
void Circle::setRadius(double radius) {
    
    if (radius >= 0.0 && radius <= MAX_RADIUS) {
        this->radius = radius;
    }
    else {
        while (radius < 0.0 || radius > MAX_RADIUS) {
            cout << "error: radius must be non-negative and less than or equal to " 
                    << MAX_RADIUS << endl << "re-enter radius: ";
            cin >> radius;
        }
        this->radius = radius;
    }
    
}


// reset the coordinates of the center of the circle
// NOTE:  negative coordinates are fine
void Circle::moveCircle(double centerX, double centerY) {
    
    this->centerX = centerX;
    this->centerY = centerY;
    
}


// print information about the circle
void Circle::printCircle() {
    
    cout << endl;
    cout << "The center of the circle is (" << centerX << ", " << centerY << ")" << endl;
    cout << "The radius is " << radius << endl;
    cout << "The diameter is " << radius * 2 << endl;
    cout << "The circumference is " << radius * 2 * M_PI << endl;
    cout << "The area is " << radius * radius * M_PI << endl;
    cout << endl;
    
    
}
