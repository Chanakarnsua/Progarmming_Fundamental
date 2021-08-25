#include <stdio.h>

int a;
int b;
int c;

int main()
{
    printf("Enter a,b,c : ");
    scanf_s("%d,%d,%d", &a, &b, &c);
    printf("The sum of the 2 most numbers : ");
    if (a + b > a + c & a + b > b + c)
        printf("%d",a + b);
    else if (a + c > a + b & a + c > b + c)
        printf("%d",a + c);
    else  
        printf("%d",b + c);
    return 0;
}
