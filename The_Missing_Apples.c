#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int appleHas = a - b;
    int totalApple = appleHas + c;
    printf("%d", totalApple);
    return 0;
}