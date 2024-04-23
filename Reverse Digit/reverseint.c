#include <stdio.h>

int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int reversedNum = reverse(num);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
