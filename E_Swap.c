#include<stdio.h>

void swap_fun (int a, int b){
    int temp = a;
    a = b;
    b= temp;
    printf("%d %d", a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    swap_fun(a, b);
    return 0;
}