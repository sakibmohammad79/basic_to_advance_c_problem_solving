#include<stdio.h>


void printEven (long long int digit[], int n, int i){
    if(i >= n){
        return;
    }
    
    printEven(digit, n, i+1);
     if(i % 2 == 0){
        printf("%lld ", digit[i]);
    }
}
int main()
{
    int n; scanf("%d", &n);
    long long int digit[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &digit[i]);
    }
    printEven(digit, n, 0);

    return 0;
}