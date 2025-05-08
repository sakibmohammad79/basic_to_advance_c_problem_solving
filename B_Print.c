#include<stdio.h>

void print (int value){
   
    for(int i = 1; i<=value; i++){
        printf("%d", i);
        if(i<value){
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}