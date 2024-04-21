#include <stdio.h>

int twosum(int size, int arr[size]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { 
            if (arr[i] + arr[j] == 2) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element of the array\n", i + 1);
        scanf("%d", &arr[i]); 
    }

    if (twosum(size, arr)) {
        printf("Pair with sum 2 exists in the array.\n");
    } else {
        printf("No pair with sum 2 found in the array.\n");
    }

    return 0;
}
