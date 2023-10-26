#include "student.h"
#include <cstring>
#include <iostream>
 
Student::Student(int studentID, const char* firstName, const char* lastName, int yearOfStudy)
    : studentID(studentID), yearOfStudy(yearOfStudy) {
        this->firstName = new char[strlen(firstName) + 1];
        this->lastName = new char[strlen(lastName) + 1];
        std::strcpy(this->firstName, firstName);
        std::strcpy(this->lastName, lastName);
        std::cout << "Constructor called!" << std::endl;
}

// Copy constructor
Student::Student(const Student& other)
    : studentID(other.studentID), yearOfStudy(other.yearOfStudy) {
    this->firstName = new char[strlen(other.firstName) + 1];
    this->lastName = new char[strlen(other.lastName) + 1];
    std::strcpy(this->firstName, other.firstName);
    std::strcpy(this->lastName, other.lastName);
    std::cout << "Copy constructor called!" << std::endl;
}

// Destructor
Student::~Student() {
    delete[] firstName;
    delete[] lastName;
    std::cout << "Memory dealocated" << std::endl;
}

std::string Student::toString(){
    std::string result = "Student " + std::to_string(this->studentID)
                                + ": " + this->lastName
                                + " " + this->firstName
                                + ", year of study: " + std::to_string(this->yearOfStudy) + "\n";

    return result;
}

void Student::setYearOfStudy(int year){
    this->yearOfStudy = year;
}

void Student::setName(const char* name){
    delete[] firstName;  
    this->firstName = new char[strlen(name) + 1];
    std::strcpy(firstName, name);
}