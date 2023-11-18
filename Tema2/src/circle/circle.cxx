#include "circle.h"
#include <cstring>
#include <iostream>

CurveNSP::Circle::Circle(const char* name, int radius)
    : radius(radius) {
        this->name = new char[strlen(name)+1];
        std::strcpy(this->name, name);
        std::cout << "constructor called for " << name <<  std::endl;
    }
     
CurveNSP::Circle::Circle(): name(nullptr), radius(0) {
    std:: cout << "Default constr called!" << std::endl;
}
    
CurveNSP::Circle::~Circle() {
    delete[] name;
    std::cout << "Memory deallocated!" << std::endl;
}

CurveNSP::Circle::Circle(const Circle& circle) : radius(radius) {

    name = new char[strlen(circle.name) + 1];
    std::strcpy(this->name, circle.name);
    std::cout << "Copy constructor called for: " << name << "!" << std::endl;
}

CurveNSP::Circle::Circle(Circle&& circle) : radius(radius) {
    name = circle.name;
    circle.radius = -1;
    circle.name = nullptr;
    std::cout << "Move constructor called for: " <<name << "!" << std::endl;
}

void CurveNSP::Circle::draw() const {
    std::cout << "I am drawing the circle: " << name << std::endl;
}
    
double CurveNSP::Circle::computeArea() const {
    return 3.14 * radius * radius;
 }

 void CurveNSP::Circle::setName(const char *newName) {
     delete[] name;  
    name = new char[strlen(newName) + 1];
    std::strcpy(name, newName);
}