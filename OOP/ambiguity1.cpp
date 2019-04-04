#include <bits/stdc++.h>


float f(float x) { return x / 2; }
double f(double x) { return x / 2; }

int main()
{
	float x = 29.12;
	double y = 17.06;
	printf("%.2f\n", f(x));	// float
	printf("%.2lf\n", f(y));// double
	printf("%.2f", f(10));	// ???
}

