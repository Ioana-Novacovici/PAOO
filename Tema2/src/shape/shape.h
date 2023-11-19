#pragma once

class Shape {
public:
    // pur virtual methods, without any implementation
    virtual void draw() const = 0;
    virtual double computeArea() const = 0;
    virtual void setName(const char *newName) = 0;
    virtual ~Shape() {}
};