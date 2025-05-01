#include <stdio.h>
int main() {
    int num[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    int unique = 0;
    for (int i = 0; i < 4; i++) {
        int isNew = 1;
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                isNew = 0;
                break;
            }
        }
        if (isNew) {
            unique++;
        }
    }
    printf("%d\n", 4 - unique);
    return 0;
}
