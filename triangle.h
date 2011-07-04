#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
 public:
  Triangle(unsigned int base, unsigned int height);
  ~Triangle();  

  virtual void accept(const ShapeVisitor &visitor) const;
  
  void getDimensions(unsigned int &base, unsigned int &height) const;

 protected:
  Triangle(){}; // hide the default ctor unless we expose a way to set height and width
  
  unsigned int m_base;
  unsigned int m_height;
    
};

#endif // TRIANGLE_H
