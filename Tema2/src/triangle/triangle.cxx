#include <iostream>
#include "triangle.h"
#include <math.h>

Triangle::Triangle(const char* name, int height, int width) : Poligon(name, height, width) {
     
}

bool Triangle::isEquilateral() const {
    return (height/2 * sqrt(3)  == width);
}

void Triangle::draw() const {
    std::cout << "I am drawing a triangle: " << name << std::endl;
}
    
double Triangle::computeArea() const {
    return height * width / 2;
 }