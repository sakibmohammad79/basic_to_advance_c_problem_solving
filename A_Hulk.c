#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
            printf("I hate ");
        }
        else if(i % 2 == 0){
            printf("I love ");
        }
        
        if(i == n){
            printf("it ");
        }
        else{
            printf("that ");
        }
    }
    return 0;
}