#include "Student.h"

Student::Student(int sin, const std::string& nume, const std::string& prenume, int anStudiu)
    : SIN(sin), nume(nume), prenume(prenume), anStudiu(anStudiu) {
}

// Constructor de copiere
Student::Student(const Student& other)
    : SIN(other.SIN), nume(other.nume), prenume(other.prenume), anStudiu(other.anStudiu) {
}

// Destructor
Student::~Student() {
    // Puteți adăuga aici cod pentru eliberarea resurselor, dacă este cazul
}

std::string Student::toString(){
    std::string result = "yaay, build success!";
    return result;
}