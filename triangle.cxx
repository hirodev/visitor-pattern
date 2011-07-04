#include "triangle.h"
#include "shape_visitor.h"

Triangle::Triangle(unsigned int base, unsigned int height)
  : m_base( base ),
    m_height( height )
{
}


Triangle::~Triangle(){
}

void Triangle::accept(const ShapeVisitor &visitor) const{
  visitor.visit(*this);
}

void Triangle::getDimensions(unsigned int &base, unsigned int &height) const{
  base = m_base;
  height = m_height;
}
