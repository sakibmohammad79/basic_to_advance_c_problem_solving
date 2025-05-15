#include<stdio.h>
int vowelCount(char word[],int i){
    if(word[i] == '\0'){
        return 0;
    }
    int value = vowelCount(word, i+1);
    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' 
    || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
        return value+1;
    }
    else{

        return value;
    }
}
int main()
{
    char word[201];
    fgets(word, 201, stdin);
    int result = vowelCount(word, 0);
    printf("%d", result);
    return 0;
}