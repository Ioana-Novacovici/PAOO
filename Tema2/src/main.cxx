#include <iostream>
#include "poligon.h"
#include "circle.h"
int main(int argc, char* argv[]){
    
    Shape* s1 = new Poligon("poligon", 5, 5);
    Poligon p("cerc", 1, 1);
    Poligon p3 = p;
    p.draw();
   Poligon p2("cerc2", 1, 1);
    p2.draw();
    Circle c("cerc", 12);
  return 0;
}