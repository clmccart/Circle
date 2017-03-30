/* 
 * File:   main.cpp
 * Author: smajerci
 *
 * Created on February 16, 2015, 10:25 AM
 */

#include <cstdlib>
#include <iostream>
#include "Circle.h"

using namespace std;


int main(int argc, char** argv) {

    double radius;
    double centerX;
    double centerY;
    
    // get the radius and coordinates of the circel
    cout << "Enter the radius and X and Y coordinates of the center of the circle" <<
         endl << "separated by spaces: ";
    cin >> radius;
    cin >> centerX;
    cin >> centerY;

    // create the circle and print out its information
    Circle firstCircle(radius, centerX, centerY);
    firstCircle.printCircle();

    // get new coordinates for the center
    cout << "Where would you like to move the circle to?" << endl <<
            "Enter the new X and Y coordinates of the center, separated by a space: ";
    cin >> centerX;
    cin >> centerY;
    
    // move the circle and print out its information
    firstCircle.moveCircle(centerX, centerY);
    firstCircle.printCircle();
        
        
    return EXIT_SUCCESS;
}


