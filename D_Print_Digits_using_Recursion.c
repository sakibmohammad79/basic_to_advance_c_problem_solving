#include<stdio.h>
void printDigit(int digit){
    if(digit == 0){
    
        return 0;
    }
    int lastvalue = digit%10;
    int removeLastValue = digit/10;
    printDigit(removeLastValue);
    printf("%d ", lastvalue);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        
        int digit;
        scanf("%d", &digit);
        if(digit == 0){
            printf("0");
        }
        printDigit(digit);
        printf("\n");
    }
    return 0;
}