#pragma once
#include "shape.h"

class Circle : public Shape {
private:
    char* name;
    int radius;

public:
    Circle(const char* name, int radius);
    
    Circle();
    
    ~Circle();

    Circle(const Circle& circle);
   
    Circle(Circle&& circle);

    virtual void draw() const override;
    
    virtual double computeArea() const override;

    virtual void setName(char *newName) override;
};