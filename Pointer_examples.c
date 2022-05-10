/* Finding address of a variable */

#include <stdio.h>

int main()
{
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The address of variable a is %u\n", &a);
    printf("The value of variable a is %d\n", *ptr);
    return 0;

}


/* Print and pass-2nd question solution */

#include <stdio.h>
void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}

int main()
{
    int i = 4;
    printf("The value of variable i is %d\n", i);
    
    printAdd(i); //Passing the copy of i to add function and printing the adddress of it. Hence, as it is a copy, the address will be different for both even though their value=4 is same

    printf("The address of variable i is %u\n", &i);

    return 0;

}


/* Program to calculate the sum and average of 2 numbers using pointers*/

#include <stdio.h>
void SumandAvg(int a, int b, int *Sum, float *Avg)
{
    *Sum = a+b;
    *Avg = (float)(*Sum)/2; //using float to typecast
}
int main()
{
    int i, j, Sum; 
    float Avg;
    i = 3;
    j = 6;
    SumandAvg(i, j, &Sum, &Avg);
    printf("The value of sum is %d\n", Sum);
    printf("The value of average is %.2f\n", Avg);
    return 0;

}


/* Pointer to Pointer */

#include <stdio.h>

int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %d\n", **ptr_ptr);
    printf("The address of i is %u\n", &i);

    return 0;

}


