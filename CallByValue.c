#include <stdio.h>

int sum(int a, int b);

int main()
{
    int x = 4, y = 7;
    printf("The value of x and y is = %d and %d\n", x, y);
    printf("The value of 4+7 is = %d\n", sum(x, y));
    printf("The value of x and y after function call is = %d and %d\n", x, y);
    return 0;

}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a= 687;
    b = 786;

    return c;
}

//In call by value, the values are copied in the main function, hence, even if we assign some other value to same variables in a separate function, the output will remain same and wont change.