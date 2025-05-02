#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word[n+1];
    scanf("%s", word);
    int freq[26] = {0};
    for(int i = 0; i<n; i++){
        char ch = tolower(word[i]);
        if(ch >= 'a' && ch <='z'){
            int value = ch - 'a';
            freq[value] = 1;
        }
    }

    for(int i = 0; i<26; i++){
        if(freq[i] < 1){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}