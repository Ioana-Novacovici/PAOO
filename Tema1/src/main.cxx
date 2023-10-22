#include <iostream>
#include <student.h>

using namespace std;

int main(int argc, char* argv[]){
    Student s1(12, "Maria", "pr", 1);
    std::cout << s1.toString();
    std::cout << "Hello woooorld" << std::endl;
  return 0;
}