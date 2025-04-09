#include<stdio.h>
int main(){
    int sum = 0, i = 1, n;
    scanf("%d", &n);
    for ( i = 0; i <=n; i++)
    {
        sum += i;
    }
    printf("The sum is: %d", sum);
    return 0;

}