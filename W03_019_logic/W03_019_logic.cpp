#include <stdio.h>

int main()
{
	int a = 3;

	// 논리연산자와 비교연삱자가 같이 사용될 때
	// 비교연산자 먼저 계산 후 논리연산자 계산
	bool p = a >= 1 && a <= 10;
	bool q = a == 3 || a == 7;
	bool r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}