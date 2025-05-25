#include<stdio.h>
int is_binary_palindrome(int n){
    int bin[32];
    int index = 0;

    while (n>0)
    {
        bin[index++] = n % 2;
        n /= 2;
    }

    //check binary digit is palindrom
    int isPalindrom = 1;
    for(int i = 0, j = index -1; i<j; i++, j--){
        if(bin[i] != bin[j]){
            isPalindrom = 0;
        }
    }

    return isPalindrom;
    
}
void check_odd_num (int n){
if(n % 2 == 1 && is_binary_palindrome(n)){
   printf("YES");
}
else{
    printf("NO");
}
}
int main()
{
    int n;
    scanf("%d", &n);
    check_odd_num(n);
    return 0;
}