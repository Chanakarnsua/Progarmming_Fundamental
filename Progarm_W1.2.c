#include <stdio.h>

int a;
int b;
int main()
{
printf("Enter a,b : ");
scanf_s("%d,%d", &a, &b);
int plus1 = a+b;
int plus2 = a-b;
int plus3 = a*b;
int plus4 = a/b;
printf(" a + b =  %d\n a - b =  %d\n a * b =  %d\n a / b =  %d\n", plus1, plus2, plus3, plus4);
    return 0;
}
