#include "Vector.h"

#pragma region Vector2f
Vector2f::Vector2f(float x, float y)
{
	this->x = x;
	this->y = y;
}
Vector2f::~Vector2f()
{
}
std::string Vector2f::toString()
{
	std::string result = "Vector2f{ " + std::to_string(this->x) + ", " + std::to_string(this->y) + " }";
	return result;
}
#pragma endregion Vector2f

#pragma region Vector3f
Vector3f::Vector3f(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector3f::~Vector3f()
{
}
std::string Vector3f::toString()
{
	std::string result = "Vector3f{ " + std::to_string(this->x) + ", " + std::to_string(this->y) + ", " + std::to_string(this->z) + "} ";
	return result;
}
#pragma endregion Vector3f

#pragma region Vector4f
Vector4f::Vector4f(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}
Vector4f::~Vector4f()
{
}
std::string Vector4f::toString()
{
	std::string result = "Vector4f{ " + std::to_string(this->x) + ", " + std::to_string(this->y) + ", " + std::to_string(this->z) + ", " + std::to_string(this->w) + " }";
	return result;
}
#pragma endregion Vector4f
