//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: ---
//
//===================================================================//
#pragma once

#include <iostream>

struct idVec3 
{
	float x, y, z;

	idVec3();
	idVec3(const float& x, const float& y, const float& z);

	idVec3& add(const idVec3& other);
	idVec3& subtract(const idVec3& other);
	idVec3& multiply(const idVec3& other);
	idVec3& divide(const idVec3& other);

	friend idVec3& operator+(idVec3 left, const idVec3& right);
	friend idVec3& operator-(idVec3 left, const idVec3& right);
	friend idVec3& operator*(idVec3 left, const idVec3& right);
	friend idVec3& operator/(idVec3 left, const idVec3& right);

	idVec3 &operator+=(const idVec3 &other);
	idVec3 &operator-=(const idVec3 &other);
	idVec3 &operator*=(const idVec3 &other);
	idVec3 &operator/=(const idVec3 &other);


	friend std::ostream& operator<<(std::ostream& stream, const idVec3& vector);
};
