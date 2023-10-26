#pragma once

#include <string>

class Student {
private:
    int studentID;
    char* firstName;
    char* lastName;
    int yearOfStudy;

public:
    Student(int studentID, const char* firstName, const char* lastName, int yearOfStudy);
    ~Student();
    Student(const Student& student);
    std::string toString();
    void setYearOfStudy(int year);
    void setName(const char* name);
};