#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int boardSize = a * b;
    int dominoCount = boardSize / 2;
    printf("%d", dominoCount);
    return 0;
}