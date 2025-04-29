#include<stdio.h>
int main()
{
    int n, maxHight;
    scanf("%d %d", &n, &maxHight);
    int hight;
    int place = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &hight);
        if(hight <= maxHight){
            place++;
        }
        else if(hight > maxHight){
            place += 2;
        }
    }
    printf("%d", place);
    return 0;
}