#include<stdio.h>
#include<string.h>
int main()
{
    char value[102];
    scanf("%s", &value);
    int len_value = strlen(value);
    int odd_sum = 0;
    int even_sum = 0;
    int possition = 1;
    for(int i = len_value -1; i>=0; i--, possition++){
        if(possition % 2 == 1){
            int digit = value[i] - '0';
            odd_sum += digit;
        }
        else{
            int digit = value[i] - '0';
            even_sum += digit;
        }
    }
    int result = abs(odd_sum - even_sum);
    if(result % 11 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}