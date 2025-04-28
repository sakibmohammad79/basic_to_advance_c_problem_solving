#include<stdio.h>
int main()
{
    int value;
    scanf("%d", &value);
    if(value % 3 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}