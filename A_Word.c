#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[101];
    scanf("%s", &a);
    int lowerCount = 0;
    int upperCount = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] >= 'a' && a[i] <='z'){
            lowerCount++;
        }
        else if(a[i] >= 'A' && a[i] <='Z'){
            upperCount++;
        }
    }

    for(int i = 0; a[i] != '\0'; i++){
        if(lowerCount > upperCount){
            a[i] = tolower(a[i]);
        }
        else if(lowerCount < upperCount){
            a[i] = toupper(a[i]);
        }
        else{
            a[i] = tolower(a[i]);
        }
    }

    printf("%s", a);
    
    return 0;
}