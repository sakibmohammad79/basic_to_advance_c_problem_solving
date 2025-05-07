#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {
        int n;
        scanf("%d", &n);

        int roundNumbers[10]; // Max 5 digit, but for safety 10
        int count = 0;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;         // Last digit
            if (digit != 0) {
                roundNumbers[count] = digit * place;
                count++;
            }
            n = n / 10;
            place *= 10;
        }

        printf("%d\n", count);          // How many round numbers
        for (int i = 0; i < count; i++) {
            printf("%d ", roundNumbers[i]);
        }
        printf("\n");
    }

    return 0;
}
