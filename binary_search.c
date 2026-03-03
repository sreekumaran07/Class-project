#include <stdio.h>
int main()
{
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(found == 0)
    {
        printf("Element not found\n");
    }
    return 0;
}
