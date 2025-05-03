#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = n / 100;
    n= n%100;

    while (n > 0) {
        if (n >= 20) {
            n -= 20;
        } else if (n >= 10) {
            n -= 10;
        } else if (n >= 5) {
            n -= 5;
        } else {
            n -= 1;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}
