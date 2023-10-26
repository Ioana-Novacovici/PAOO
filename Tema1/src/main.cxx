#include <iostream>
#include <student.h>

using namespace std;

int main(int argc, char* argv[]){
    Student s1(12485, "Maria", "Popescu", 1);
    std::cout << s1.toString();
    Student s2 = s1;
    std::cout << s2.toString();
    s1.setYearOfStudy(7);
    s1.setName("Ioana");
    std::cout << s1.toString();
    std::cout << s2.toString();
    std::cout << "Hello woooorld" << std::endl;
  return 0;
}