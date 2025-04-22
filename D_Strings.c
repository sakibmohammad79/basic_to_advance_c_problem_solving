#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);
    int aSize = strlen(a);
    int bSize = strlen(b);
    printf("%d %d\n", aSize, bSize);
    printf("%s%s\n", a,b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    

    return 0;
}