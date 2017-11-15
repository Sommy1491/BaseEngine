#include "Matrix.h"

#pragma region Matrix4x4
Matrix4x4::Matrix4x4()
{
	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {

			this->matrix[i][j] = 0;
		}
	}
}

Matrix4x4::~Matrix4x4()
{
}

void Matrix4x4::SetRow(int index, Vector4f row)
{
	matrix[index][0] = row.x;
	matrix[index][1] = row.y;
	matrix[index][2] = row.z;
	matrix[index][3] = row.w;
}

std::string Matrix4x4::toString()
{
	std::string result = "Matrix4x4{\n";
	result += std::to_string(this->matrix[0][0]) + ", " + std::to_string(this->matrix[0][1]) + ", " + std::to_string(this->matrix[0][2]) + ", " + std::to_string(this->matrix[0][3]) + "\n" +
		std::to_string(this->matrix[1][0]) + ", " + std::to_string(this->matrix[1][1]) + ", " + std::to_string(this->matrix[1][2]) + ", " + std::to_string(this->matrix[1][3]) + "\n" +
		std::to_string(this->matrix[2][0]) + ", " + std::to_string(this->matrix[2][1]) + ", " + std::to_string(this->matrix[2][2]) + ", " + std::to_string(this->matrix[2][3]) + "\n" +
		std::to_string(this->matrix[3][0]) + ", " + std::to_string(this->matrix[3][1]) + ", " + std::to_string(this->matrix[3][2]) + ", " + std::to_string(this->matrix[3][3]) + " \n}";
	
	return result;
}

void Matrix4x4::toIdentity()
{
	this->matrix[0][0] = 1; this->matrix[0][1] = 0; this->matrix[0][2] = 0; this->matrix[0][3] = 0;
	this->matrix[1][0] = 0; this->matrix[1][1] = 1; this->matrix[1][2] = 0; this->matrix[1][3] = 0;
	this->matrix[2][0] = 0; this->matrix[2][1] = 0; this->matrix[2][2] = 1; this->matrix[2][3] = 0;
	this->matrix[3][0] = 0; this->matrix[3][1] = 0; this->matrix[3][2] = 0; this->matrix[3][3] = 1;
}
Matrix4x4 Matrix4x4::operator+(Matrix4x4& m)
{
	Matrix4x4 result;
	
	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {
			
			result.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
		}
		
	}

	return result;
}

Matrix4x4 Matrix4x4::operator-(Matrix4x4 & m)
{
	Matrix4x4 result;

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {

			result.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];
		}

	}

	return result;
}

Matrix4x4 Matrix4x4::operator*(Matrix4x4 & m)
{ 
	return Matrix4x4();
}
#pragma endregion Matrix4x4
