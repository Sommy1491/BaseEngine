#pragma once

#include <string>
#include "Vector.h"
class Matrix4x4
{
public:
	Matrix4x4();
	~Matrix4x4();
	void SetRow(int index, Vector4f row);
	std::string toString();
	void toIdentity();
	Matrix4x4 operator+(Matrix4x4& m);
	Matrix4x4 operator-(Matrix4x4& m);
	Matrix4x4 operator*(Matrix4x4& m);

private:
	float matrix[4][4];
};