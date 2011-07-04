#ifndef SHAPE_VISITOR_H
#define SHAPE_VISITOR_H

class Circle;
class Rectangle;
class Triangle;

// Abstract class to Visit the shapes
class ShapeVisitor {
 public:
  virtual ~ShapeVisitor() {};

  virtual void visit(const Circle &circle) const = 0;
  virtual void visit(const Rectangle &rectangle) const = 0;
  virtual void visit(const Triangle &triangle) const = 0;

};


#endif // SHAPE_VISITOR_H
