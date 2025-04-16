#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    // printf("%d", n);
    if(0 < n){
        for(int i = n; i>=0; i--){
            printf("%d ", i);
        }
    }
    else if(0>n){
        for(int i = n; i<=0; i++){
            printf("%d ", i);
        }
    }
    else{
        printf("0");
    }
    return 0;
}