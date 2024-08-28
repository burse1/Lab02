#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	
	cout << "Hello, my name is Spencer and I'm going to solve the equation:" << endl << "Ax + B = 0" << endl << "For x" << endl << endl;
	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;

	X = (0 - B) / A;

	

	cout << "Solving " <<A <<"x+" << B << "=0 for x..." << endl << "The answer is:" << endl << "x=" << X;

	
}