#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len_str = strlen(str);

    for (int i = 0, j = len_str - 1; i <= j; i++, j--) {
        if (str[i] == '?' && str[j] == '?') {
            str[i] = 'a';
            str[j] = 'a';
        }
        else if (str[i] == '?') {
            str[i] = str[j];
        }
        else if (str[j] == '?') {
            str[j] = str[i];
        }
        else if (str[i] != str[j]) {
            printf("-1\n");
            return 0;
        }
    }

    printf("%s\n", str);
    return 0;
}
