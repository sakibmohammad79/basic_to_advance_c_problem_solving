#include<stdio.h>
int main()
{
    int value, n;
    scanf("%d %d", &value, &n);
   
    for(int i = 1; i<=n; i++){
      int lastNumber = value % 10;
        if(lastNumber != 0){
            value--;
        }
        else if(lastNumber == 0){
            value /= 10;
        }
        
    }
    printf("%d", value);
    return 0;
}