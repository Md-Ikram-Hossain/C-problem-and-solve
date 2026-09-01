1. #include <stdio.h>

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
    2.#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
    3.#include <stdio.h>

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
    4.#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d numbers: ", n - 1);

    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}

    printf("Largest number = %d\n", largest);

    return 0;
}
