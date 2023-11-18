#pragma once

class Shape {
public:
    // pur virtual methods, no implementation
    virtual void draw() const = 0;
    virtual double computeArea() const = 0;
};