

int isPrime(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int Prime = 1;
        if (arr[i] == 1) {
            return 0;
        } else {
            for (int j = 2; j <= sqrt(arr[i]); j++) {
                if (arr[i] % j == 0) {
                    Prime = 0;
                    break;
                }
            }
            if (Prime) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}
