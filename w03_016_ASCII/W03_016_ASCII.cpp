#include <stdio.h>

int main()
{
	printf("%c + %c = %c\n", '2', '3', '2' + '3');
	printf("%c + %c = %d\n", '2', '3', '2' + '3');
	printf("%d + %d = %d\n", '2', '3', '2' + '3');

	//대문자 -> 소문자 변환 : +32
	printf("%c -> %c\n", 'A', 'A' + 32);

	//소문자 -> 대문자 변환 : -32
	printf("%c -> %c\n", 'f', 'f' - 32);

	//A~Z 출력
	for (int i = 'A'; i <= 'Z'; i++)
	    printf("%c = %d\n", i, i);

	//a~z
	for (int i = 97; i <= 122; i++)
	    printf("%c = %d\n", i, i);
}
