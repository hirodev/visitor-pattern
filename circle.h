#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
 public:
  Circle(unsigned int radius);
  ~Circle();  

  virtual void accept(const ShapeVisitor &visitor) const;
  
  void getDimensions(unsigned int &radius) const;

 protected:
  Circle(){}; // hide the default ctor unless we expose a way to set dimensions
  
  unsigned int m_radius;
    
};

#endif // CIRCLE_H
