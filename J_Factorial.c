#include<stdio.h>
long long int factorial(int value){
    
    if(value ==1){
        return 1;
    }
    long long int mul = factorial(value-1);
    return mul*value; 
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int result = factorial(n);
    printf("%lld", result);
    return 0;
}