#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x);

int main(void)
{
    int arr[] = {1, 15, 45, 55, 69, 78, 125, 355, 12223, 100000};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 355;
    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1) 
    ? printf("Element is not present in array")
    : printf("Element is present at index %d", result);
}


int binarySearch(int arr[], int l, int r, int x) 
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) 
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}