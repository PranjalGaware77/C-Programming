
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mid = n / 2;

    // Sort the first half
    for (i = 0; i < mid; i++) {
        for (j = i + 1; j < mid; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Sort the second half
    for (i = mid; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("First half in ascending order: ");
    for (i = 0; i < mid; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSecond half in ascending order: ");
    for (i = mid; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
