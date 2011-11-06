#ifndef Vector3D_H_
#define Vector3D_H_

#include <math.h>

class Vector3D
{
	public:
		Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);
		void set(double x, double y, double z);
		void get(double &x, double &y, double &z);
		double getX(void);
		double getY(void);
		double getZ(void);
		void normalize(void);
    friend Vector3D operator +(Vector3D &a, Vector3D &b);
    friend Vector3D operator -(Vector3D &a, Vector3D &b);
    friend double operator *(Vector3D &a, Vector3D &b);
    friend Vector3D operator /(Vector3D &a, Vector3D &b);
	private:
		double x;
		double y;
		double z;
};

#endif
