#pragma once
#include "shape.h"

namespace CurveNSP {

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

        virtual void setName(const char *newName) override;
    };

}