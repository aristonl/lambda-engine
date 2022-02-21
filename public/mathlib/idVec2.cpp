#include "idVec2.h"

// A quick example of what this does (which should help you know what the rest do)
	// idVec2 vector(1.0f, 2.0f);
	// vector.add(idVec2(3.0f, 4.0f)).add(idVec2(5.0f, 6.0f));

	// idVec2 a(1.0f, 2.0f);
	// idVec2 b(3.0f, 4.0f);
	// idVec2 c = a + b;

	// std::cout << c << std::endl; --(CONSOLE)-> idVec2: (4, 6)

idVec2::idVec2() 
{
	x = 0.0f;
	y = 0.0f;
}

idVec2::idVec2(const float& x, const float& y) 
{
	this->x = x;
	this->y = y;
}

idVec2& idVec2::add(const idVec2& other) 
{
	x += other.x;
	y += other.y;

	return *this;
}

idVec2& idVec2::subtract(const idVec2& other) 
{
	x -= other.x;
	y -= other.y;

	return *this;
}

idVec2& idVec2::multiply(const idVec2& other) 
{
	x *= other.x;
	y *= other.y;

	return *this;
}

idVec2& idVec2::divide(const idVec2& other) 
{
	x /= other.x;
	y /= other.y;

	return *this;
}

idVec2& operator+(idVec2& left, const idVec2& right) 
{
	return left.add(right);
}

idVec2& operator-(idVec2& left, const idVec2& right) 
{
	return left.subtract(right);
}

idVec2& operator*(idVec2& left, const idVec2& right) 
{
	return left.multiply(right);
}

idVec2& operator/(idVec2& left, const idVec2& right) 
{
	return left.divide(right);
}

idVec2 &idVec2::operator+=(const idVec2 &other) 
{
	return add(other);
}
idVec2 &idVec2::operator-=(const idVec2 &other) 
{
	return subtract(other);
}
idVec2 &idVec2::operator*=(const idVec2 &other) 
{
	return multiply(other);
}

idVec2 &idVec2::operator/=(const idVec2 &other) 
{
	return divide(other);
}

std::ostream& operator<<(std::ostream& stream, const idVec2& vector) 
{
	stream << "idVec2: (" << vector.x << ", " << vector.y << ")";
	return stream;
}
