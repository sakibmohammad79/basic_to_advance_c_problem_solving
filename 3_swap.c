#include<stdio.h>
int main(){
    int num1, num2, temp;
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap two number: %d %d", num1, num2);
    return 0;

}