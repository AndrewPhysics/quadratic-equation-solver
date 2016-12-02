#include <iostream>
#include <math.h>
#include "quadraticEquation.h"
using namespace std;

int main() {
	quadraticEquation p1;
	p1.getEquationConstants();
	p1.testDiscriminant_D();
	system("pause");
	return 0;
}