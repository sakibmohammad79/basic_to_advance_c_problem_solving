#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int p, q;
    int moveCount = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d %d", &p, &q);
        if((q-p) >= 2){
            moveCount++;
        }
    }
    printf("%d", moveCount);
    return 0;
}