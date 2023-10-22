#pragma once

#include <string>

class Student {
private:
    int SIN;
    std::string nume;
    std::string prenume;
    int anStudiu;

public:
    Student(int sin, const std::string& nume, const std::string& prenume, int anStudiu);
    ~Student();
    Student(const Student& student);
    std::string toString();
};