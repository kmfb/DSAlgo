#include <stdio.h>


int binarySearch(int arr[], int l, int r, int x) {
   
    // 1. set a while loop. condition is (l <= r)
    // 2. while body
    //  2.1  get the middle index
    //  2.2  condition 1: the value of array's middle element equals x
    //       code: return the index of element;
    //       condition 2: the value of array's middle element less than x
    //       code: let the left go to hell. (modify the value of variable l)
    //       else code: let the right go to hell. (modify the value of variable r)
    
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return -1;
    
}

void main() {

    // the arr to search.
    int arr[] = {1, 2, 8, 9, 12, 16};

    // the arr's length.
    int length = sizeof(arr) / sizeof(arr[0]);

    // the num to search.
    int x = 8;

    // get result from binarySearch function. 
    int result = binarySearch(arr, 0, length - 1, x);

    (result == -1) ? printf("Element is not present in array.\n")
                   : printf("Element is present at index %d.\n", result);

}