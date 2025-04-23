#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        char s[51], t[51];
        scanf("%s %s", s, t);  

        int s_len = strlen(s);
        int t_len = strlen(t);
        int i = 0, j = 0;

        for (; i < s_len && j < t_len; i++, j++) {
            printf("%c%c", s[i], t[j]);
        }

        while (i < s_len) {
            printf("%c", s[i]);
            i++;
        }

        while (j < t_len) {
            printf("%c", t[j]);
            j++;
        }

        printf("\n");
    }

    return 0;
}
