#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int a;
int b;
int c;

int main()
{
    printf("Enter a,b,c : ");
    scanf("%d,%d,%d", &a, &b, &c);
    int plus1 = a + b;
    int plus2 = a + c;
    int plus3 = b + c;
    printf("The sum of the 2 most numbers : ");
    if (a + b > a + c & a + b > b + c)
        printf("%d",a + b);
    else if (a + c > a + b & a + c > b + c)
        printf("%d",a + c);
    else  
        printf("%d",b + c);
    return 0;
}
