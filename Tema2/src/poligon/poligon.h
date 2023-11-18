#pragma once
#include "shape.h"

class Poligon : public Shape {
protected:
    char* name;
    int height;
    int width;

public:
    Poligon(const char* name, int height, int width);
    
    Poligon();
    
    ~Poligon();

    Poligon(const Poligon& poligon);
   
    Poligon(Poligon&& poligon);

    virtual void draw() const override;
    
    virtual double computeArea() const override;

    virtual void setName(const char *newName) override;

    Poligon& operator=(const Poligon &other);

    Poligon& operator=(Poligon &&other);
};