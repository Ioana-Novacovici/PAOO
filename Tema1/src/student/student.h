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
    
    Student();
    
    ~Student();
    
    Student(const Student& student);
   
    Student(Student&& student);
    
    std::string toString() const;
    
    void setStudentID(int id);

    void setFirstName(const char* name);
};