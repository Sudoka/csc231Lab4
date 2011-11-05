#ifndef Vector3D_H_
#define Vector3D_H_

class Vector3D
{
	public:
		Vector3D(float x = 0.0, float y = 0.0, float z = 0.0);
		void set(float x, float y, float z);
		void get(float &x, float &y, float &z);
		float getX(void);
		float getY(void);
		float getZ(void);
    friend Vector3D operator +(Vector3D &a, Vector3D &b);
    friend Vector3D operator -(Vector3D &a, Vector3D &b);
    friend float operator *(Vector3D &a, Vector3D &b);
    friend Vector3D operator /(Vector3D &a, Vector3D &b);
	private:
		float x;
		float y;
		float z;
};

#endif
