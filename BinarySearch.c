#include<stdio.h>
int BinarySearch(int A[], int n, int x)
{
    int low=0, high = n-1;
    while(low<=high)
 {
    int mid = low + (high-low)/2;
    if(x == A[mid]) 
    return mid; //found X, return (exit)
    else if(x < A[mid])
    high = mid-1; // x lies before mid
    else 
    low = mid+1; // x lies after mid
 }
 return -1;
}

int main()
{
    int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
    printf("Enter a number: ");
    int x;
    scanf("%d", &x);
    int index = BinarySearch(A, 8, x);
    if(index != -1)
    printf("Number %d is at index %d", x, index);
    else 
    printf("Number %d not found", x);

}