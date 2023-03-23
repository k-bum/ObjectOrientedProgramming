#include <iostream>
using namespace std;

int main() {
	/*
	int x, y;
	x = 10;
	y = 20;
	cout << x << endl;
	cout << y << endl;
	*/
	
	/*
	unsigned short siX; 
	unsigned iX;
	long liX;
	long long lliX;
	cout << "sizeof(siX):" << sizeof(siX) << endl;
	cout << "sizeof(iX):" << sizeof(iX) << endl;
	cout << "sizeof(liX):" << sizeof(liX) << endl;
	cout << "sizeof(lliX):" << sizeof(lliX) << endl;
	*/

	/* 
	cout << "(7 == 5):" << ((7 == 5) ? 1 : 0) << endl;
	cout << "(7 >= 5):" << ((7 >= 5) ? 1 : 0) << endl;
	cout << "(7 != 5):" << ((7 != 5) ? 1 : 0) << endl;
	cout << "(7 <= 5):" << ((7 <= 5) ? 1 : 0) << endl;
	cout << "(7 >= 5 ? 100 : -100):" << ((7 >= 5) ? 100 : -100) << endl;
	*/
	
	/*
	const float PI = 3.14;
	char ch1 = 65;
	char ch2 = ch1 + 32;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;
	*/
	
	/* 
	int x, y, sum, mult;
	float div;
	cin >> x >> y;
	sum = x + y;
	mult = x * y;
	div = (float)x / y;
	cout << x << '\t' << y << endl;
	cout << "x + y = " << sum << endl;
	cout << "x * y = " << mult << endl;
	cout << "x / y = " << div << endl;
	*/

	/*
	cout << "My name is Àü°è¹ü" << endl;
	*/

	/*
	int A, B;
	cout << "Please enter two integer values:";
	cin >> A >> B;
	cout << A << " + " << B << '=' << A + B << endl;
	cout << A << " - " << B << '=' << A - B << endl;
	cout << A << " * " << B << '=' << A * B << endl;
	cout << A << " / " << B << '=' << A / B << endl;
	cout << A << " % " << B << '=' << A % B << endl;
	*/

	/*
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;

	cout << i1 + (i2 * i3) << endl;
	cout << i1 * (i2 + i3) << endl;
	cout << i1 / (i2 + i3) << endl;
	cout << i1 / i2 + i3 << endl;
	cout << 3 + 4 + 5 / 3 << endl;
	cout << (3 + 4 + 5) / 3 << endl;
	cout << d1 + (d2 * d3) << endl;
	cout << d1 + d2 * d3 << endl;
	cout << d1 / d2 - d3 << endl;
	cout << d1 / (d2 - d3) << endl;
	cout << d1 + d2 + d3 / 3 << endl;
	cout << (d1 + d2 + d3) / 3 << endl;
	*/

	/*
	int A, B, C;
	cout << "Please enter two integer values:" << endl;
	cout << "A : ";
	cin >> A;
	cout << "B : ";
	cin >> B;
	C = A;
	A = B;
	B = C;
	cout << "value of A is : " << A << endl;
	cout << "value of B is : " << B << endl;
	*/

	double f, c;
	cout << "Please enter Fahrenheit value: ";
	cin >> f;
	c = 5.0 / 9.0 * (f - 32);
	cout << "Celsius value is " << c << endl;
}
