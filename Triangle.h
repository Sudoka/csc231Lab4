//This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
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
		void findNormalVector(void);
		void findAngles(void);
		void print(void);
	private:
		Vector3D v[3];
		Vector3D normal;
		double angles[3];
};

#endif
