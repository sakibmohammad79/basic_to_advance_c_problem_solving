#include<stdio.h>
int log2Floor(long long int n){
    if(n<=1){
        return 0;
    }

    return 1 + log2Floor(n/2);
}
int main()
{
    long long int n; scanf("%lld", &n);
    int result = log2Floor(n);
    printf("%d", result);
    return 0;
}