// Check if array is sorted using recursion
#include<stdio.h>

int isSorted(int arr[], int n)
{
    if(n <= 1)
        return 1;
    if(arr[n-2] > arr[n-1])
        return 0;
    return isSorted(arr, n - 1);
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 2, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    isSorted(arr1, size1) ? printf("Array 1: Sorted\n")
                          : printf("Array 1: Not Sorted\n");
    isSorted(arr2, size2) ? printf("Array 2: Sorted\n")
                          : printf("Array 2: Not Sorted\n");
    return 0;
}
