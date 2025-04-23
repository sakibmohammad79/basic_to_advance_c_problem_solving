#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int b_len = strlen(b);
    for(int i = 0; i<=b_len; i++){
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}