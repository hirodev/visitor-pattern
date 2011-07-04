#include <iostream>
#include <cstdlib>
#include <string>

#include "shape_area_visitor.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;

// Calculates the area of the conctete shapes provided by applying the visitor pattern
int main(int argc, char **argv){

  ShapeAreaVisitor shapeAreaVisitor;

  Circle circle(4);
  Rectangle rectangle(3, 4);
  Triangle triangle(10, 6);

  circle.accept( shapeAreaVisitor );
  rectangle.accept( shapeAreaVisitor );
  triangle.accept( shapeAreaVisitor );

  return EXIT_SUCCESS;
}
