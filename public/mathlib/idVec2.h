#pragma once

#include <iostream>

struct idVec2 
{
	float x, y;

	idVec2();
	idVec2(const float& x, const float& y);

	idVec2& add(const idVec2& other);
	idVec2& subtract(const idVec2& other);
	idVec2& multiply(const idVec2& other);
	idVec2& divide(const idVec2& other);

	friend idVec2& operator+(idVec2& left, const idVec2& right);
	friend idVec2& operator-(idVec2& left, const idVec2& right);
	friend idVec2& operator*(idVec2& left, const idVec2& right);
	friend idVec2& operator/(idVec2& left, const idVec2& right);

	idVec2 &operator+=(const idVec2 &other);
	idVec2 &operator-=(const idVec2 &other);
	idVec2 &operator*=(const idVec2 &other);
	idVec2 &operator/=(const idVec2 &other);


	friend std::ostream& operator<<(std::ostream& stream, const idVec2& vector);
};
