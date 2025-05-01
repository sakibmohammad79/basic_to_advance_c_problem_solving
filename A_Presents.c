#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int friends[n+1];
    int result[n+1];
    
    for(int i = 1; i<=n; i++){
        scanf("%d", &friends[i]);
    }

    for(int i = 1; i<=n; i++){
        int to = friends[i];
        result[to] = i;
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}