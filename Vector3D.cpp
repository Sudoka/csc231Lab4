#include "Vector3D.h"

Vector3D::Vector3D(float x, float y, float z)
{
	this->set(x, y, z);
	return;
}

void Vector3D::set(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	return;
}

void Vector3D::get(float &x, float &y, float &z)
{
	x = this->x;
	y = this->y;
	z = this->z;
	return;
}

float Vector3D::getX(void)
{
	return this->x;
}

float Vector3D::getY(void)
{
	return this->y;
}

float Vector3D::getZ(void)
{
	return this->z;
}

Vector3D operator +(Vector3D &a, Vector3D &b)
{
	return Vector3D(a.getX() + b.getX(),
								a.getY() + b.getY(),
								a.getZ() + b.getZ());
}

Vector3D operator -(Vector3D &a, Vector3D &b)
{
	return Vector3D(a.getX() - b.getX(),
								a.getY() - b.getY(),
								a.getZ() - b.getZ());
}

float operator *(Vector3D &a, Vector3D &b)
{
	return (float)( a.getX() * b.getX() +
									a.getY() * b.getY() +
									a.getZ() * b.getZ());
}

Vector3D operator /(Vector3D &a, Vector3D &b)
{
	return Vector3D(a.getY() * b.getZ() - a.getZ() * b.getY(),
								a.getZ() * b.getX() - a.getX() * b.getZ(),
								a.getX() * b.getY() - a.getY() * b.getX());
}
