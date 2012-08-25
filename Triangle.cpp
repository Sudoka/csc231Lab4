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

#include "Triangle.h"

Triangle::Triangle()
{
	for(int i = 0; i < 3; i++) this->v[i].set(0.0, 0.0, 0.0);
	return;
}

Triangle::~Triangle()
{
	return;
}

void Triangle::setVertice(int i, double x, double y, double z)
{
	this->v[i].set(x, y, z);
	return;
}

void Triangle::setTriangle(string s[])
{
	string x, y, z;
	int sp1, sp2, eol, i;
	double vx, vy, vz;

	for(i = 0; i < 3; i++)
	{
		sp1 = s[i].find(' ');
		sp2 = s[i].find_last_of(' ');

		x = s[i].substr(0, sp1);		// find the x coordinate in the string
		y = s[i].substr(sp1 + 1, sp2 - sp1 - 1);	// find the y coordinate in string
		z = s[i].substr(sp2 + 1);		// find the z coordinate in the string
		eol = z.length() - 1;	// get ready to remove the new line character
		if(z[eol] < 0x20) z = z.substr(0, eol);	// remove it if new line is present

		// Debugging...
//		cout << "|" << x << "|" << endl;
//		cout << "|" << y << "|" << endl;
//		cout << "|" << z << "|" << endl << endl;

		// Convert strings to double
		vx = atof(x.c_str());
		vy = atof(y.c_str());
		vz = atof(z.c_str());

		this->v[i].set(vx, vy, vz);
	}
	return;
}

void Triangle::findNormalVector(void)
{
	Vector3D a, b, c;
	a = this->v[1] - this->v[0];
	b = this->v[2] - this->v[1];
	c = a / b;	// Cross product
	this->normal.set(c);
	this->normal.normalize();
	return;
}

void Triangle::findAngles(void)
{
	// Find the vectors that make up the sides of the triangle and use for
	// finding the angles of the triangle. Also, need to be sure the vector tails
	// share the same point.
	this->angles[0] = findAngle(this->v[2] - this->v[0], this->v[1] - this->v[0]);
	this->angles[1] = findAngle(this->v[0] - this->v[1], this->v[2] - this->v[1]);
	this->angles[2] = findAngle(this->v[1] - this->v[2], this->v[0] - this->v[2]);
	return;
}

void Triangle::print(void)
{
	cout << "  Vertices:";
	for(int i = 0; i < 3; i++)
	{
		if(i != 0) cout << ",";
		cout << " " << this->v[i].getX();
		cout << " " << this->v[i].getY();
		cout << " " << this->v[i].getZ();
	}
	cout << endl;
	cout << "  Normal vertex: ";
	cout << this->normal.getX() << " ";
	cout << this->normal.getY() << " ";
	cout << this->normal.getZ() << endl;
	cout << "  Angles (in degrees): ";
	cout << this->angles[0] << ", ";
	cout << this->angles[1] << ", ";
	cout << this->angles[2] << endl;
	return;
}
