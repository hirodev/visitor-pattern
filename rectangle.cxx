#include "rectangle.h"
#include "shape_visitor.h"

Rectangle::Rectangle(unsigned int height, unsigned int width)
  : m_height( height ),
    m_width( width )
{
}

Rectangle::~Rectangle(){
}

void Rectangle::accept(const ShapeVisitor &visitor) const{
  visitor.visit(*this);
}

void Rectangle::getDimensions(unsigned int &height, unsigned int &width) const{
  height = m_height;
  width = m_width;
}
