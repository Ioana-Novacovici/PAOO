#include "student.h"
#include <cstring>
#include <iostream>
 
Student::Student()
: studentID(-1), yearOfStudy(-1), firstName(nullptr), lastName(nullptr){
    std::cout << "Default constructor called!" << std::endl;
}

Student::Student(int studentID, const char* firstName, const char* lastName, int yearOfStudy)
    : studentID(studentID), yearOfStudy(yearOfStudy) {
       
        this->firstName = new char[strlen(firstName) + 1];
        this->lastName = new char[strlen(lastName) + 1];
        std::strcpy(this->firstName, firstName);
        std::strcpy(this->lastName, lastName);
        
        std::cout << "Constructor called for: " << firstName << "!" << std::endl;
}

// Copy constructor
Student::Student(const Student& student)
    : studentID(student.studentID), yearOfStudy(student.yearOfStudy) {

    firstName = new char[strlen(student.firstName) + 1];
    lastName = new char[strlen(student.lastName) + 1];
    std::strcpy(this->firstName, student.firstName);
    std::strcpy(this->lastName, student.lastName);

    std::cout << "Copy constructor called for: " << firstName << "!" << std::endl;
}

// Move constructor
Student::Student(Student&& student)
    : studentID(student.studentID), yearOfStudy(student.yearOfStudy) {
    
    firstName = student.firstName;
    lastName = student.lastName;

    student.studentID = -1;
    student.yearOfStudy = 1;
    student.firstName = nullptr;
    student.lastName = nullptr;

    std::cout << "Move constructor called for: " << firstName << "!" << std::endl;
}

// Destructor
Student::~Student() {
    delete[] firstName;
    delete[] lastName;
    std::cout << "Memory dealocated!" << std::endl;
}

std::string Student::toString() const{
    std::string result;
    if(firstName == nullptr || lastName == nullptr){
        result = "Student info not available!\n";
    }else{
        result = "Student " + std::to_string(studentID)
                                + ": " + lastName
                                + " " + firstName
                                + ", year of study: " + std::to_string(yearOfStudy) + "\n";

    }
    return result;
}

void Student::setStudentID(int id){
    studentID = id;
}

void Student::setFirstName(const char* name){
    delete[] firstName;  
    firstName = new char[strlen(name) + 1];
    std::strcpy(firstName, name);
}