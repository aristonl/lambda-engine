//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: ---
//
//===================================================================//
#pragma once

#include <iostream>

struct idVec4 
{
	float x, y, z, w;

	idVec4();
	idVec4(const float& x, const float& y, const float& z, const float& w);

	idVec4& add(const idVec4& other);
	idVec4& subtract(const idVec4& other);
	idVec4& multiply(const idVec4& other);
	idVec4& divide(const idVec4& other);

	friend idVec4& operator+(idVec4 left, const idVec4& right);
	friend idVec4& operator-(idVec4 left, const idVec4& right);
	friend idVec4& operator*(idVec4 left, const idVec4& right);
	friend idVec4& operator/(idVec4 left, const idVec4& right);

	idVec4 &operator+=(const idVec4 &other);
	idVec4 &operator-=(const idVec4 &other);
	idVec4 &operator*=(const idVec4 &other);
	idVec4 &operator/=(const idVec4 &other);


	friend std::ostream& operator<<(std::ostream& stream, const idVec4& vector);
};
