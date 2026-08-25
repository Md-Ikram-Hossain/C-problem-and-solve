#include <stdio.h>

int main() {
    int num, largest;

    printf("Enter 5 numbers: ");

    scanf("%d", &largest);

    for (int i = 1; i < 5; i++) {
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
    }

    printf("Largest number = %d\n", largest);

    return 0;
}