#include <stdio.h>

int main()
{
    char ch = 'A';
    char str[20] = "Hello world!";
    float flt = 10.234;
    int no = 150;
    double dbl = 20.123456;

    printf("chracter is %cn\n", ch);
    printf("String is %s\n", str);
    printf("Float value is %f\n", flt);
    printf("Integer value is %f\n", no);
    printf("Double value is %f\n", dbl);
    printf("Octal value is %o\n", no);
    printf("Hexadecimal value is %x\n", no);
}