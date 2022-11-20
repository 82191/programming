#include <stdio.h>

int main()
{
	float a = 9.8;
	float b = 3.14;
	float add = a + b;
	float sub = a - b;
	float mul = a * b;
	float div = a / b;
	//float는 %연산 불가

	printf("%f + %f = %d\n", a, b, add);
	printf("%f - %f = %d\n", a, b, sub);
	printf("%f * %f = %d\n", a, b, mul);
	printf("%f / %f = %d\n", a, b, div);
}