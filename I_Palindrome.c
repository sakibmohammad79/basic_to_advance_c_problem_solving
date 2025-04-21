#include<stdio.h>
#include<string.h>
int main()
{
    char word[1001];
    scanf("%s", &word);
    int wordLen = strlen(word);
    int firstindex = 0;
    int lastIndex = wordLen -1;
    int palindrom = 1;
    for(int i = 0, j=lastIndex; i<j; i++, j--){
        if(word[i] == word[j]){
            palindrom = 1;
        }
        else{
            palindrom = 0;
        }
    }
    if(palindrom){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}