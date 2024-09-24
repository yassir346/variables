#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("write the first number and the second number");
    scanf("first number :%f\n", &a);
    scanf("second num :%f\n", &b);
    c = a + b;
    printf("la somme est: %d", c);

    return 0;
}
