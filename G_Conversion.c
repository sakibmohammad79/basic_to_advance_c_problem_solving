#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100001];
    scanf("%s", str); 
    int strLength = strlen(str);
    
    for(int i = 0 ; i < strLength; i++ ){
        if(str[i] == ','){
            str[i] = ' ';
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);
    return 0;
}
