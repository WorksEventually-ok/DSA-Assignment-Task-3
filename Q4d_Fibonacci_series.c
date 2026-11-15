
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

    printf("Enter number of terms (0 to 47): ");
    scanf("%d", &n);

    if (n < 0 || n > 47) {
        printf("Invalid input\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
    }

    return 0;
}
