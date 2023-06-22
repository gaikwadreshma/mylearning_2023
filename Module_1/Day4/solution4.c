#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEvenIndex = 0;
    int sumOddIndex = 0;
    
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndex += arr[i];
        } else {
            sumOddIndex += arr[i];
        }
    }
    
    int difference = sumEvenIndex - sumOddIndex;
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
