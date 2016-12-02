#include "quadraticEquation.h"
#include <iostream>
#include <math.h>
using namespace std;
//hogyan érdemes érték adást csinálni?

quadraticEquation::quadraticEquation()
{
	
}

quadraticEquation::quadraticEquation(double a=1, double b=0, double c=0, double x1=0, double x2=0)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->x1 = x1;
	this->x2 = x2;
}
void quadraticEquation::getEquationConstants()
{
	cout << "Welcome to the equation (type: a*x^2+b*x+c=0) solver program." << endl;
	cout << "Please type in the constants of the equation: a,b,c!" << endl;
	/*A:cout << "a=";
	cin >> a;
	if (a == 0) goto A;*/
	do{
		cout << "a=";
		cin >> a;
	} while (a == 0);
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "a=" << a << " b=" << b << " c=" << c << endl << endl;
}

void quadraticEquation::testDiscriminant_D() {
	D = (pow(b, 2) - (4 * a*c));
	//this->D = D;
	if (D < 0)
	{
		cout << "The equation has no solution" << endl;
	}
	if (D == 0)
	{
		cout << "The equation has one solution" << endl;
		cout << "x1= " << (-b + sqrt(D)) / (2 * a) << endl;
	}
	if (D > 0)
	{
		cout << "The equation has two solutions" << endl;
		cout << "x1= " << (-b + sqrt(D)) / (2 * a) << endl;
		cout << "x2= " << (-b - sqrt(D)) / (2 * a) << endl;
	}
}


quadraticEquation::~quadraticEquation()
{
	cout << "exit" << endl;
}
