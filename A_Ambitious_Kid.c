#include<stdio.h>
#include<limits.h>
int main()
{
    int n, value;
    scanf("%d", &n);
    int max = INT_MIN;
    int count = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        
         if(value > max){
            max = value;
        }
    }
   
    if(max > 0){
        while (max != 0)
        {
            max--;
            count++;
        }  
    }
    else if(max<0){
        while (max != 0)
        {
            max++;
            count++;
        }
        
    }
    printf("%d", count);

    return 0;
}