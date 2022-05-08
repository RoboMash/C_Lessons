#include<stdio.h>
int FindRotationCount(int A[], int n)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        if(A[low]<=A[high]) 
        return low; //case 1

        int mid = (low + high)/2;
        int next = (mid+1)%n, prev= (mid+n-1)%n;

        if(A[mid] <= A[next] && A[mid] <= A[prev]) // Case 2
        return mid;

        else if(A[mid] <= A[high]) 
        high = mid-1; // case 3
        else if(A[mid] >= A[low]) 
        low = mid+1; //case 4 
    }
    return -1;
}
int main()
{
    int A[] = {15, 22, 23, 28, 31, 38, 5, 6, 8, 10, 12};
    int count = FindRotationCount(A, 11);
    printf("The array is rotated %d times", count);
}