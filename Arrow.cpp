#include "Arrow.h"

void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}
Arrow::Arrow(Point a, Point b, std::string type, std::string name) : _source(a), _destination(b), Shape(name, type)
{
    if (a == b)
        exit(1);
}

Point Arrow::getSource() const
{
    return _source;
}
Point Arrow::getDestination() const
{
    return _destination;
}
