// Binary Search using recursion
#include<stdio.h>

int binarySearch(int arr[], int low, int high, int target)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == target)
        return mid;
    else if(target < arr[mid])
        return binarySearch(arr, low, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, high, target);
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, size - 1, target);

    if(result != -1)
        printf("Found at index %d", result);
    else
        printf("Not found");

    return 0;
}
