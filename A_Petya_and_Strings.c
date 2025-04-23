#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    int a_len = strlen(a);
    int b_len = strlen(b);

    for(int i = 0; i < a_len; i++) {
        a[i] = tolower(a[i]);
    }

    for(int i = 0; i < b_len; i++) {
        b[i] = tolower(b[i]);
    }

    int result = strcmp(a, b);

    printf("%d", result);

    return 0;
}
