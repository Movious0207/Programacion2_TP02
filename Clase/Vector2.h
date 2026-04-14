#pragma once

struct Vector3
{
	public:
	
	float x;
	float y;
	float z;

	Vector3(float x, float y, float z) : x(x), y(y), z(z) {};

	Vector3 operator + (Vector3 other);
	Vector3 operator - (Vector3 other);
	Vector3 operator * (float scalar);
	Vector3 operator / (float scalar);
	float operator * (Vector3 other);
};