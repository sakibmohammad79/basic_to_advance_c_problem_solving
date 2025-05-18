#include<stdio.h>
#include<ctype.h>
#include<strings.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[4];
        scanf("%s", s);
        for(int i = 0; i<3; i++){
            s[i] = tolower(s[i]);
        }

        if(strcmp(s, "yes") == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    
    
    return 0;
}