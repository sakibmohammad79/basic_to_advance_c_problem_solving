#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    scanf("%s", &str);
    int strLen = strlen(str);
    int sumResult = 0;
    for(int i = 0; i<strLen; i++){
        sumResult += str[i] - 48;
        
    }
    printf("%d", sumResult);
    return 0;
}