#include <stdio.h>

int main()
{
    float P, T, R, Simple_Interest;
    P = 1000;
    T = 2;
    R = 4;
    Simple_Interest = (P * T * R)/100;

    printf("The Simple Interest is: %.2f", Simple_Interest);

    return 0;

}