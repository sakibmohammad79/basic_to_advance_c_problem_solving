#include<stdio.h>
#include<string.h>
int main()
{
    char word[101];
    scanf("%s", &word);
    int word_len = strlen(word);
    int isPalindrom = 1;
    for(int i = 0, j=word_len - 1; i<j; i++, j--){
        if(word[i] != word[j]){
            isPalindrom = 0;
        }
       
    }   
    if(isPalindrom){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}