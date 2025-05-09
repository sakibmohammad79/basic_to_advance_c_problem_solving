#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int t = 1; t <= N; t++) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
        }

        int isSum = 0;

        if (arr[0] + arr[1] == arr[2] ||
            arr[0] + arr[2] == arr[1] ||
            arr[1] + arr[2] == arr[0]) {
            isSum = 1;
        }

        if (isSum) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
