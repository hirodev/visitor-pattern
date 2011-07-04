#ifndef SHAPE_H
#define SHAPE_H

#include "shape_element.h"

// Abstract base class for all shapes
class Shape : public ShapeElement {
 public:
  virtual ~Shape() {}
  
  virtual void accept(const ShapeVisitor &visitor) const = 0;
  
};

#endif // SHAPE_H
