#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, *(ptr+i));
//     }
// }

//or we can use this function method

void printArray(int ptr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
}

int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16, 17};
    printArray(arr, 7);

    return 0;

}