#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
     if(num <= 0){
        printf("Not a valid number!");
    }
    else if(num % 2 == 0){
        printf("This number is even!");
    }
    else{
        printf("This number is odd!");
    }
    
}