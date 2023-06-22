#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumOdd = 0;
    int sumEven = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    
    int difference = sumEven - sumOdd;
    return difference;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int difference = calculateDifference(arr, size);
    
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Difference: %d\n", difference);
    
    return 0;
}
