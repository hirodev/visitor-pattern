#include "circle.h"
#include "shape_visitor.h"


Circle::Circle(unsigned int radius)
  : m_radius( radius )
{
}


Circle::~Circle(){
}

void Circle::accept(const ShapeVisitor &visitor) const{
  visitor.visit(*this);
}

void Circle::getDimensions(unsigned int &radius) const{
  radius = m_radius;
}
