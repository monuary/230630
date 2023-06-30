#include<iostream>
#include<cmath>
using namespace std;

double a1 = 0.159;
double a2 = 0.0831;

int main()
{
	double y11 = -(20 + 1 / a1);
	double y22 = -(20 + 1 / a2);
	double y33 = -20;
	double y = 10;

	double detY = y11 * (-y22 * y33 + y * y) - y * (-y * y33 + y * y) + y * (-y * y + y * y22);

	double z11 = (-y22 * y33 + y * y) / -detY;
	double z12 = -(-y * y33 + y * y) / -detY;
	double z13 = (-y * y + y22 * y) / -detY;
	double z21 = -(-y * y33 + y * y) / -detY;
	double z22 = (-y11 * y33 + y * y) / -detY;
	double z23 = -(-y11 * y + y * y) / -detY;
	double z31 = (-y * y + y * y22) / -detY;
	double z32 = -(-y11 * y + y * y) / -detY;
	double z33 = (-y11 * y22 + y * y) / -detY;

	double I3 = -1 / z33;

	double v1 = 1 - z13 / z33;
	double v2 = 1 - z23 / z33;
	
	double I21 = -10 * (v2 - v1);

	cout << z11 << " " << z12 << " " << z13 << endl;
	cout << z21 << " " << z22 << " " << z23 << endl;
	cout << z31 << " " << z32 << " " << z33 << endl;
	cout << endl;
	cout << I3 << endl;
	cout << endl;
	cout << v1 << " " << v2 << endl;
	cout << endl;
	cout << I21 << endl;

	return 0;
}