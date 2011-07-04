#include <iostream>

#include "shape_area_visitor.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;


ShapeAreaVisitor::ShapeAreaVisitor(){
}

ShapeAreaVisitor::~ShapeAreaVisitor(){
}

void ShapeAreaVisitor::visit(const Circle &circle) const{
  unsigned int radius = 0;
  const static double PI = 3.14159;

  circle.getDimensions(radius);
  double area = PI * (radius*radius); // pi r squared

  cout << "Circle with radius " << radius << " units has area " << area << " units squared." << endl;
}

void ShapeAreaVisitor::visit(const Rectangle &rectangle) const{
  unsigned int height = 0;
  unsigned int width = 0;

  rectangle.getDimensions(height, width);
  unsigned int area = height * width;

  cout << "Rectangle with height " << height << " units and width " << width << " units has area " << area << " units squared." << endl;
}

void ShapeAreaVisitor::visit(const Triangle &triangle) const{
  unsigned int base = 0;
  unsigned int height = 0;
 
  triangle.getDimensions(base, height);
  double area = .5 * base * height;

  cout << "Triangle with base " << base << " units and height " << height << " units has area " << area << " units squared." << endl;
}
