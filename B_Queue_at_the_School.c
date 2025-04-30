#include<stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char s[n+1];
    scanf("%s", s); 

    for(int j = 1; j <= t; j++){
        for(int i = 0; s[i+1] != '\0'; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                // Swap B and G
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++; // Skip next to avoid double swap
            }
        }
    }

    printf("%s\n", s); 
    return 0;
}
