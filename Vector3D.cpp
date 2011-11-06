#include "Vector3D.h"

Vector3D::Vector3D(double x, double y, double z)
{
	this->set(x, y, z);
	return;
}

void Vector3D::set(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	return;
}

void Vector3D::get(double &x, double &y, double &z)
{
	x = this->x;
	y = this->y;
	z = this->z;
	return;
}

double Vector3D::getX(void)
{
	return this->x;
}

double Vector3D::getY(void)
{
	return this->y;
}

double Vector3D::getZ(void)
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

double operator *(Vector3D &a, Vector3D &b)
{
	return (double)( a.getX() * b.getX() +
									a.getY() * b.getY() +
									a.getZ() * b.getZ());
}

Vector3D operator /(Vector3D &a, Vector3D &b)
{
	return Vector3D(a.getY() * b.getZ() - a.getZ() * b.getY(),
								a.getZ() * b.getX() - a.getX() * b.getZ(),
								a.getX() * b.getY() - a.getY() * b.getX());
}

void Vector3D::normalize(void)
{
	double len;
	len = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	this->x /= len;
	this->y /= len;
	this->z /= len;
	return;
}
