// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h> 
#include <stdio.h>

#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' ' 
#define COND1(x) (x)<0.0
#define FUNC1(x) -(x*x)+1/x

#define COND2(x) (x)<=0.0 && (x)<3.0
#define FUNC2(x) sqrt((x) * (x) + 1 )
#define FUNC3(x) (x)-3

#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x)) 
int main()
{
	double a = -4.0, b = 4.0, x, h = 0.1;

	printf("x:\t");     
	for (x = a; x <= b; x += h) { printf("%8.3f%c", x, PUT_DELIM(x, h, b)); }

	printf("y:\t");     
	for (x = a; x <= b; x += h) { printf("%8.3f%c", FUNC(x), PUT_DELIM(x, h, b)); }
	getchar();
    return 0;
}

