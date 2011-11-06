#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Vector3D.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

class Triangle
{
	public:
		Triangle();
		virtual ~Triangle();
		void setTriangle(string s[]);
		void setVertice(int i, double x, double y, double z);
	private:
		Vector3D v[3];
};

#endif
