#include <stdio.h>
// define min macro
#define min(a,b) ((a) < (b) ? (a) : (b))
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int fashion_days = min(a, b);              // Days with different socks
    int same_days = (a > b ? a - b : b - a) / 2;  // Days with same socks

    printf("%d %d\n", fashion_days, same_days);

    return 0;
}
