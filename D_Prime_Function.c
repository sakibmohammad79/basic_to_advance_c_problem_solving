#include <stdio.h>
#include <math.h>

void check_prime(int n) {
    if (n < 2) {
        printf("NO\n");
        return;
    }

    int isPrime = 1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++) {
        int n;
        scanf("%d", &n);
        check_prime(n);
    }

    return 0;
}
