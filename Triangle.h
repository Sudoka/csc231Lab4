#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Vector3D.h"

class Triangle
{
	public:
		Triangle();
		virtual ~Triangle();
		void setVertice(int i, float x, float y, float z);
	private:
		Vector3D v[3];
};

#endif
