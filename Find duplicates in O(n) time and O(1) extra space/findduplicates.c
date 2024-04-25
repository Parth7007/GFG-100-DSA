#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the Size of the Array\n");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter the %d number\n", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { 
            if (arr[i] == arr[j]) {
                printf("Duplicate Element: %d\n", arr[i]);
            }
        }
    }

    free(arr); 
    return 0;
}
