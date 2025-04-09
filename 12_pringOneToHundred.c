// Write a c program to print all odd number from 100 to 1
#include<stdio.h>
int main(){
    int i = 100;
    for(i; i>=1; i--){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}