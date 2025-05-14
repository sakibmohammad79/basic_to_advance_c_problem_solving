#include<stdio.h>
long long int sum(int digit[], int n){
    if(n < 0){
        return 0;
    }
    return digit[n] + sum(digit, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int digit[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &digit[i]);
    }

    int total = sum(digit, n - 1);
    printf("%lld", total);

    return 0;
}
