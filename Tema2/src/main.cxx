#include <iostream>
#include "poligon.h"
#include "circle.h"
#include "triangle.h"

using namespace CurveNSP;

int main(int argc, char* argv[]){
    
   Circle circle("C(O, R)", 10);
   std::cout << "Area of my circle is: " << circle.computeArea() << std::endl;
   Circle bigCircle(Circle("Big circle C(O2, R)", 20));

   Circle copyCircle = bigCircle;
   copyCircle.setName("Blue and big circle");
   copyCircle.draw();
   bigCircle.draw();

   Poligon rectangle("ABCD rectangle", 10, 5);
   Poligon rectangle2;
   std::cout << "Area is: " << rectangle.computeArea() << std::endl;
   rectangle.draw();

   rectangle2 = rectangle;
   rectangle = Poligon("PRRectangle", 15, 2);

   Shape* specialshape = new Triangle("triangle MNP", 2, 3);
   std::cout << "Area of triangle is: " << specialshape->computeArea() << std::endl;
   specialshape->draw();
    
   delete specialshape;
   Shape* s = new Circle("small circle", 2);
   s->draw();

  return 0;
}