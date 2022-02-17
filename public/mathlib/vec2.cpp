#include "vec2.h"

// TODO: add +=, -=, *=, /= operator overloads

// A quick example of what this does (which should help you know what the rest do)
	// vec2 vector(1.0f, 2.0f);
	// vector.add(vec2(3.0f, 4.0f)).add(vec2(5.0f, 6.0f));

	// vec2 a(1.0f, 2.0f);
	// vec2 b(3.0f, 4.0f);
	// vec2 c = a + b;

	// std::cout << c << std::endl; --(CONSOLE)-> vec2: (4, 6)

vec2::vec2() {
	x = 0.0f;
	y = 0.0f;
}

vec2::vec2(const float& x, const float& y) {
	this->x = x;
	this->y = y;
}

vec2& vec2::add(const vec2& other) {
	x += other.x;
	y += other.y;

	return *this;
}

vec2& vec2::subtract(const vec2& other) {
	x -= other.x;
	y -= other.y;

	return *this;
}

vec2& vec2::multiply(const vec2& other) {
	x *= other.x;
	y *= other.y;

	return *this;
}

vec2& vec2::divide(const vec2& other) {
	x /= other.x;
	y /= other.y;

	return *this;
}

vec2& operator+(vec2& left, const vec2& right) {
	return left.add(right);
}

vec2& operator-(vec2& left, const vec2& right) {
	return left.subtract(right);
}

vec2& operator*(vec2& left, const vec2& right) {
	return left.multiply(right);
}

vec2& operator/(vec2& left, const vec2& right) {
	return left.divide(right);
}

std::ostream& operator<<(std::ostream& stream, const vec2& vector) {
	stream << "vec2: (" << vector.x << ", " << vector.y << ")";
	return stream;
}