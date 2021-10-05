#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1 = 0.0;
	double num2 = 0.0;

	printf("Please enter kilometers: ");
	scanf("%lf", &num1);

	num2 = 0.6214 * num1;
	printf("%.1lf km is equal to %.1lf miles", num1, num2);
	return 0;
}