#include "Vector3.h"

Vector3 Vector3::operator + (Vector3 other)
{
	return (Vector3 (this->x + other.x , this->y + other.y , this->z + other.z));
}

Vector3 Vector3::operator - (Vector3 other)
{
	return (Vector3(this->x - other.x, this->y - other.y , this->z - other.z));
}

void Vector3::operator += (Vector3 other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
}

void Vector3::operator -= (Vector3 other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;
}

Vector3 Vector3::operator * (float scalar)
{
	return (Vector3(this->x * scalar, this->y * scalar, this->z * scalar));
}

Vector3 Vector3::operator / (float scalar)
{
	return (Vector3(this->x / scalar, this->y / scalar, this->z / scalar));
}

void Vector3::operator *= (float scalar)
{
	this->x *= scalar;
	this->y *= scalar;
	this->z *= scalar;
}

void Vector3::operator /= (float scalar)
{
	this->x /= scalar;
	this->y /= scalar;
	this->z /= scalar;
}

float Vector3::operator ^ (Vector3 other)
{
	return ((this->y * other.z - this->x * other.y) - (this->x * other.z - this->z * other.x) + (this->x * other.y - this->y * other.x));
}

float Vector3::operator * (Vector3 other)
{
	return (this->x * other.x + this->y * other.y + this->z * other.z);
}