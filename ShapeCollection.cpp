#include "ShapeCollection.h"

void ShapeCollection::addShape(std::string type)
{
	if (type == "square") {
		squares.push_back(Square(3));
	}
}

void ShapeCollection::getShapeTable(std::string type)
{
	for (auto& c : circles) {
		c.toString();
	}
	for (auto s : squares) {
		s.toString();
	}
	for (auto r : rectangles) {
		r.toString();
	}
}