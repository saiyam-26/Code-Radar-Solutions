#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int k = 1;  
        for (int j = 1; j <= 2 * n - 1; j++) { 
            if (j >= n + 1 - i && j <= n - 1 + i) {
                printf("%d", k);
                j < n ? k++ : k--; 
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
