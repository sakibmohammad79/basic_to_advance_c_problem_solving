#include<stdio.h>
int main()
{
    int n, value;
    scanf("%d", &n);
    long long int sum = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        sum += value;
    }
    if(sum<0){
        sum = (-sum);
    }
    printf("%lld", sum);
    return 0;
}