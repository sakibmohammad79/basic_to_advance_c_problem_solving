#include<stdio.h>
int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);
    int count = 0;
    while (1)
    {
        if(a>b){
            break;
        }
        else{
            a *= 3;
            b *= 2;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}