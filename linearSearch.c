#include <stdio.h>

int search(int arr[], int count, int searchNum) {
    for (int i =0; i < count; i++) {
        if (searchNum == arr[i]) {
            return i;
        }
    }
    return -1;
}

void main() {
    int arr[] = {1, 2, 4, 5, 6, 8, 10, 57, 20, 11};
    int elementsCount = sizeof(arr) / sizeof(arr[0]);
    int searchNum = 4;
    int result = search(arr, elementsCount, searchNum);
    (result == -1) ? printf("Element is not present in array")
                  : printf("Element is present at index %d\n", result);

    
}