#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a[21], b[21];
    scanf("%s", &a);
    scanf("%s", &b);
    int i =0;
    while (true)
    {
        if(a[i] == '\0' && b[i] == '\0'){
            printf("%s", a);
            break;
        }
        else if(a[i] == '\0'){
            printf("%s", a);
            break;
        }
        else if(b[i] == '\0'){
            printf("%s", b);
            break;
        }
        else if(a[i] == b[i]){
            i++;
            continue;
        }
        else if(a[i] < b[i]){
            printf("%s", a);
            break;
        }
        else if(a[i] > b[i]){
            printf("%s", b);
            break;
        }
    }
    
    return 0;
}