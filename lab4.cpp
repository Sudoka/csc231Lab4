/**********************************************************************
Lab 4

Description
-----------
Find the normal unit vector and all three interior angles (in degrees)
of a list of triangles defined in a file.

Instructions
-----------
- Open and read a file containing triangle vertex positions
- File format:
	- Each line contains an x y z position representing a triangle vertex
	- Three successive lines define three vertices of a triangle
	- Assume no more than 100 triangles in the file
	- Use the sample files: "triangles.dat"
- Store the triangles, close the file
- For each triangle, print the following
	- Three vertices (x, y, z position)
	- Normal unit vertex (normalized vector in unit length)
	- Three interior angles in degrees (sum should equal 180 degrees)

Notes
-----
- Reference the textbook readings (Ch. 4) for information on vectors
- This is NOT a drawing program and does not require OpenGL and GLUT
- Print final results to the screen

Results
---------
Your program should compute the following results:
Triangle 0
  Vertices: 0 -0.353553 -0.707107, 0.707107 -0.353553 0, -0.707107 -0.353553 0
  Normal vertex: 0 -1 0
  Angles (in degrees): 90, 45, 45
Triangle 1
  Vertices: -0.707107 -0.353553 0, 0.707107 -0.353553 0, 0 -0.353553 0.707107
  Normal vertex: 0 -1 0
  Angles (in degrees): 45, 45, 90
Triangle 2
  Vertices: 0 -0.353553 -0.707107, -0.707107 -0.353553 0, 0 0.353553 0
  Normal vertex: -0.57735 0.577351 -0.57735
  Angles (in degrees): 60, 60, 60
Triangle 3
  Vertices: -0.707107 -0.353553 0, 0 -0.353553 0.707107, 0 0.353553 0
  Normal vertex: -0.57735 0.577351 0.57735
  Angles (in degrees): 60, 60, 60
Triangle 4
  Vertices: 0 -0.353553 0.707107, 0.707107 -0.353553 0, 0 0.353553 0
  Normal vertex: 0.57735 0.577351 0.57735
  Angles (in degrees): 60, 60, 60
Triangle 5
  Vertices: 0.707107 -0.353553 0, 0 -0.353553 -0.707107, 0 0.353553 0
  Normal vertex: 0.57735 0.577351 -0.57735
  Angles (in degrees): 60, 60, 60

**********************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	string data;
  // Open file (NOTE: Use \\ to separate folder names in filename)
  fstream in( "triangles.dat", ios::in );

	// Read vertices and construct triangles
  if(in.is_open())
  {
    while(in.good())
    {
      getline(in, data);
      cout << data << endl;
    }
    in.close();
  }
  else
  {
  	cout << "Cannot open file." << endl;
  	exit(1);
  }

	// For each triangle

		// Compute normal

		// Compute angles

		// Print results

	// Keep console window visible
	getchar();
	return 0;
}
