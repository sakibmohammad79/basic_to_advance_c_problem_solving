

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int score, baseScore = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &score);

        if (i == k) {
            baseScore = score;
        }

        if (score >= baseScore && score > 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
