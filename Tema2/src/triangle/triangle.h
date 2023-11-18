#pragma once
#include "poligon.h"

class Triangle : public Poligon {
public:
    Triangle(const char* name, int height, int width);

    void draw() const override;
    
    double computeArea() const override;

    bool isEquilateral() const;
};