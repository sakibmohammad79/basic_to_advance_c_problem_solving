#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 0) {
        // 5^0 = 1
        printf("01\n");
    } else if (n == 1) {
        printf("05\n");
    } else {
        printf("25\n");
    }

    return 0;
}
