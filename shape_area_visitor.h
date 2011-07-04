#ifndef SHAPE_AREA_VISITOR_H
#define SHAPE_AREA_VISITOR_H

#include "shape_visitor.h"

// Visits the shapes to calculate area
class ShapeAreaVisitor : public ShapeVisitor {
 public:
  ShapeAreaVisitor();
  virtual ~ShapeAreaVisitor();

  virtual void visit(const Circle &circle) const;
  virtual void visit(const Rectangle &rectangle) const;
  virtual void visit(const Triangle &triangle) const;

};


#endif // SHAPE_AREA_VISITOR_H
