/* Using hard code method*/
#include <stdio.h>

int main()
{
    int l=5, b=4, A;
    A = l * b;
    printf("The area of rectangle is %d", A);

    return 0;

}

/* Using user supplied inputs */
#include <stdio.h>

int main()
{
    int l, b, A;

    printf("Enter the value of length of rectangle: ");
    scanf("%d", &l);

    printf("Enter the value of breadth of rectangle: ");
    scanf("%d", &b);

    printf("The area of rectangle is %d", l * b);

    return 0;

}