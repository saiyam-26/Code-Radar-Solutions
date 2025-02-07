#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n + 1 - i && j <= n - 1 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n + 1 - i && j <= n - 1 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
