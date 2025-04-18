#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        char word[100];
    int middleWordNo = 0;
    scanf("%s", &word);
    int wordLen = strlen(word);
    if(wordLen <=10){
        printf("%s\n", word);
    }
    else if(10<wordLen){
        printf("%c%d%c\n", word[0], wordLen -2, word[wordLen-1]);
    }
    }
    return 0;
}