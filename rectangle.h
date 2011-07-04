#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
 public:
  Rectangle(unsigned int height, unsigned int width);
  ~Rectangle();  

  virtual void accept(const ShapeVisitor &visitor) const;
  
  void getDimensions(unsigned int &height, unsigned int &width) const;
  
 protected:
  Rectangle(){}; // hide the default ctor unless we expose a way to set height and width
  
  unsigned int m_height;
  unsigned int m_width;
  
};

#endif // RECTANGLE_H
