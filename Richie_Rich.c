#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);
    for(int i = 1; i<=t; i++){
    int a,b,x;
    scanf("%d %d %d", &a, &b, &x);
    int earn = b-a;
    int year = earn/x;
    printf("%d\n", year);
    }
    return 0;
}