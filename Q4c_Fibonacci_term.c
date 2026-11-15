
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the term (0 to 46): ");
    scanf("%d", &n);

    if (n < 0 || n > 46) {
        printf("Invalid input\n");
    } else {
        printf("Fibonacci term = %d\n", fibonacci(n));
    }

    return 0;
}
