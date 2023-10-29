#include <iostream>
#include <student.h>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){

  Student s1(12485, "Ioana", "Novacovici", 4);
  Student s2 = s1;
  s2.setStudentID(12486);
  s2.setFirstName("Sonia");
  std::cout << s1.toString();
  std::cout << s2.toString();


  Student* s3;
  s3 = new Student(12490, "Andrei", "Marinescu", 1);
  std::cout << s3->toString();

  Student movedStudent(std::move(s1));
  std::cout << s1.toString();
  std::cout << movedStudent.toString();

  delete s3;
  return 0;
}