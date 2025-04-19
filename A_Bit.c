#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);
    char word[10];

    for (int i = 1; i <= n; i++) {
        scanf("%s", word);

        if ((strcmp(word, "X++") == 0) || (strcmp(word, "++X") == 0)) {
            x++;
        }
        else if ((strcmp(word, "X--") == 0) || (strcmp(word, "--X") == 0)) {
            x--;
        }
    }

    printf("%d", x);
    return 0;
}
