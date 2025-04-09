#include<stdio.h>
int main(){
    int n, factorial = 1;
    scanf("%d", &n);
    if(n < 0){
        printf("Factorial is not defined for negative number!");
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial value: %d", factorial);
    }
    return 0;
}