#include<stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int result1 = a + b - c;
    long long int result2 = a + b * c;
    long long int result3 = a - b + c;
    long long int result4 = a - b * c;
    long long int result5 = a * b + c;
    long long int result6 = a * b - c;
    if(d == result1 || d == result2 || d == result3 ||
    d == result4 || d == result5 || d == result6){ 
        printf("YES");
    }
    else{
        printf("NO");
    }
   
    
    return 0;
}