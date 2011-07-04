#ifndef SHAPE_ELEMENT_H
#define SHAPE_ELEMENT_H

class ShapeVisitor;

// Abstract element class for the Shape visitor pattern
class ShapeElement {
 public:
  virtual ~ShapeElement() {};

  virtual void accept(const ShapeVisitor &visitor) const = 0;

};

#endif // SHAPE_ELEMENT_H
