#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("The number is positive!");
    }
    else if(num < 0){
        printf("The number is negative!");
    }
    else{
        printf("The number is equal zero!");
    }
}