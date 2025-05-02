#include<stdio.h>
#include<string.h>
int main()
{
    char word[78];
    scanf("%s", word);
    int freq[26] = {0};
    for(int i = 0; word[i] != '\0'; i++){
        int index = word[i] - 'a';
        freq[index]++;
    }
    for(int i = 0; i<26; i++){
        int value = freq[i];
        if(value == 2){
            printf("%c\n", i + 'a');
            break;
        }
    }
    return 0;
}