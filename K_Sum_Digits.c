#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d", &n);

   char value[n+1];
   scanf("%s", &value);

   int sum = 0;

   for(int i = 0; i<n; i++){
    int digit = value[i] - '0';
    sum += digit;
   }

   printf("%d", sum);
   
    return 0;
}