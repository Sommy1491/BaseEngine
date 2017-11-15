#pragma once
#include <string>

class Vector2f
{
public:
	Vector2f(float x, float y);
	~Vector2f();
	std::string toString();

private:
	float x, y;

};

class Vector3f
{
public:
	Vector3f(float x, float y, float z);
	~Vector3f();
	std::string toString();

private:
	float x, y, z;

};

class Vector4f
{
	friend class Matrix4x4;

public:
	Vector4f(float x, float y, float z, float w);
	~Vector4f();
	std::string toString();

private:
	float x, y, z, w;
};
