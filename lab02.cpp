// lab02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h> 
#define _USE_MATH_DEFINES
#include <math.h> 
#define FUNC(x) M_PI*x/4
#define Q(x, n) -((2*n+1)*(2*n+1)*sin(2*n+3))/((2*n+3)*(2*n+3)*sin(2*x+1))
#define SQR(x) (x)*(x)

int main()
{
	double x = 1.5, S = 0.0, a = -sin(x);
	unsigned int n, N = 10;
	int sign = 1;
	for (n=0; n<=N; ++n) {
		//S += a;
		//a *= Q(x, n);
		S += sign * sin((2 * n + 1)*x) / (SQR(2*n+1));
		sign = -sign;
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	return 0;
}

