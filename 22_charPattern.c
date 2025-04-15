#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 64;
    for(int i = 1; i<=n; i++){
        value += 1;
        for(int j = 1; j<=i ; j++){
            printf("%c ", value);
        }printf("\n");
    }
    return 0;
}