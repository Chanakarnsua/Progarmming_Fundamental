#include <stdio.h>

int a;
int b;
int main()
{
printf("Enter a,b : ");
scanf_s("%d,%d", &a, &b);
printf("a + b =  %d\n", a+b);
printf("a - b =  %d\n", a-b);
printf("a * b =  %d\n", a*b);
printf("a / b =  %d\n", a/b);
    return 0;
}
