#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int digit[n];
    for(int i =0; i<n; i++){
        scanf("%d", &digit[i]);
    }

    int index = 0;
    for(int i = 0; i<n; i++){
       if(digit[i] != 0){
        digit[index] = digit[i];
        index++;
       }
    }
     while (index<n)
       {
        digit[index] = 0;
        index++;
       }

       for(int i =  0; i<n; i++){
        printf("%d ", digit[i]);
       }
    return 0;
}