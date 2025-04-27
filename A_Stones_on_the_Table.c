#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char stone[n+1];
    scanf("%s", &stone);
    int count = 0;
    for(int i = 0; stone[i] != '\0'; i++){
        if(stone[i] == stone[i+1]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}