#include<stdio.h>
int main()
{
    long long int number;
    scanf("%lld", &number);
    int count = 0;
    while (number >= 4)
    {
        int lastValue = number % 10;
        if(lastValue == 4 || lastValue == 7){
            count++;
        }
        number = number / 10;
    }
    if(count == 4 || count == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}