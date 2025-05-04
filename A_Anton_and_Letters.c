#include<stdio.h>
int main()
{
    char str[1001];
    fgets(str, sizeof(str), stdin);
    int seen[26] = {0};
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            int index = str[i] - 'a';
            if(seen[index] == 0){
                seen[index] = 1;
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}