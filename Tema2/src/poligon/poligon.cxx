#include "poligon.h"
#include <cstring>
#include <iostream>

Poligon::Poligon(const char* name, int height, int width)
    : height(height), width(width) {
        this->name = new char[strlen(name)+1];
        std::strcpy(this->name, name);
        std::cout << "constructor called for " << name <<  std::endl;
    }
     
Poligon::Poligon(): name(nullptr), height(0), width(0) {
    std:: cout << "Default constr called!" << std::endl;
}
    
Poligon::~Poligon() {
    delete[] name;
    std::cout << "Memory deallocated!" << std::endl;
}

Poligon::Poligon(const Poligon& poligon)
    : height(poligon.height), width(poligon.width) {

    name = new char[strlen(poligon.name) + 1];
    std::strcpy(this->name, poligon.name);
    std::cout << "Copy constructor called for: " <<name << "!" << std::endl;
}

Poligon::Poligon(Poligon&& poligon)
    : height(poligon.height), width(poligon.width) {
    name = poligon.name;
    poligon.width = -1;
    poligon.height = -1;
    poligon.name = nullptr;
    std::cout << "Move constructor called for: " <<name << "!" << std::endl;
}

void Poligon::draw() const {
    std::cout << "I am drawing a poligon!" << std::endl;
}
    
double Poligon::computeArea() const {
    return height * width;
 }

void Poligon::setName(char *newName) {
     delete[] name;  
    name = new char[strlen(newName) + 1];
    std::strcpy(name, newName);
}

Poligon& Poligon::operator= (const Poligon &other) {
    delete[] name;

    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    width = other.width;
    height= other.height;

    std::cout << "Coppy assignment operator overload";
    return *this; 
}

Poligon& Poligon::operator= (Poligon &&other) {
    name = other.name;
    width = other.width;
    height= other.height;

    other.width = -1;
    other.height = -1;
    other.name = nullptr;

    std::cout << "Move assignment operator overload";
    return *this;
}

