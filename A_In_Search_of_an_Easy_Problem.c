#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value;
    int isEasy = 1;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        if(value == 1){
            isEasy = 0;
        }
    }

    if(isEasy){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}