#pragma once
class quadraticEquation
{
public:
	quadraticEquation();
	quadraticEquation(double a, double b, double c, double x1, double x2);
	void getEquationConstants();
	void testDiscriminant_D();
	~quadraticEquation();
private:
	double a, b, c;
	double x1, x2;
	double D;
};

