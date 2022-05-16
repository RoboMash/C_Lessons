/* Array of 10 numbers and verify using pointer arithmetic (ptr+2) */

#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];  // or we can use int *ptr = arr;

    ptr = ptr + 2;
    if(ptr==&arr[2])
    {
        printf("These point to the same location in memory\n");
    }
    else
    {
        printf("These do not point to the same location in memory\n");
    }

    return 0;

}



/* Array of 10 integers and store multiplication table of 5 */

#include <stdio.h>

int main()
{
    int mul[10];

    for(int i=0; i<10; i++)
    {
        mul[i] = 5 *(i+1);
    }

     for(int i=0; i<10; i++)
    {
        printf("5 X %d = %d\n", i+1, mul[i]);
    }
    return 0;

}



/* Reversing an Array */

#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    for(int i=0; i<(n/2); i++) //(n/2) will reverse the number because half of array will reverse.
    {
       temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);

    for(int i=0; i<7; i++)
    {
        printf("The value of %d element is: %d\n", i, arr[i]);
    }
    return 0;

}



/* Array of size 3X10 containing tables of 2,7, and 9 */

#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is: \n", num);
    for(int i=0; i<n; i++)
    {
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d X %d = %d\n", num, i+1, mulTable[i]);
    }
    printf("*********************************************\n\n");
}

int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    return 0;

}




/* Create 3D Array and print its address in increasing order */

#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<2; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;

}