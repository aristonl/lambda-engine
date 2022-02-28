//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: ---
//
//===================================================================//
#include "idVec4.h"
#include "Vector.h"


idVec4::idVec4() 
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}

idVec4::idVec4(const float& x, const float& y, const float& z, const float& w) 
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

idVec4& idVec4::add(const idVec4& other) 
{
	x += other.x;
	y += other.y;
	z += other.z;
	z += other.w;

	return *this;
}

idVec4& idVec4::subtract(const idVec4& other) 
{
	x -= other.x;
	y -= other.y;
	z -= other.z;
	w -= other.w;

	return *this;
}

idVec4& idVec4::multiply(const idVec4& other) 
{
	x *= other.x;
	y *= other.y;
	z *= other.z;
	w *= other.w;

	return *this;
}

idVec4& idVec4::divide(const idVec4& other) 
{
	x /= other.x;
	y /= other.y;
	z /= other.z;
	w /= other.w;

	return *this;
}

idVec4& operator+(idVec4 left, const idVec4& right) 
{
	return left.add(right);
}

idVec4& operator-(idVec4 left, const idVec4& right) 
{
	return left.subtract(right);
}

idVec4& operator*(idVec4 left, const idVec4& right) 
{
	return left.multiply(right);
}

idVec4& operator/(idVec4 left, const idVec4& right) 
{
	return left.divide(right);
}

idVec4 &idVec4::operator+=(const idVec4 &other) 
{
	return add(other);
}
idVec4 &idVec4::operator-=(const idVec4 &other) 
{
	return subtract(other);
}
idVec4 &idVec4::operator*=(const idVec4 &other) 
{
	return multiply(other);
}

idVec4 &idVec4::operator/=(const idVec4 &other) 
{
	return divide(other);
}

std::ostream& operator<<(std::ostream& stream, const idVec4& vector) 
{
	stream << "idVec4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
	return stream;
}
