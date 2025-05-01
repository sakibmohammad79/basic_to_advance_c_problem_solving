#include<stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    for(int i = 0, j= 0; a[i] != '\0' && b[i] != '\0'; i++, j++){
        if(a[i]  == b[j]){
            printf("0");
        }
        else if(a[i] != b[j]){
            printf("1");
        }
    }
    return 0;
}