#include<stdio.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c );
    int digit[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &digit[i][j]);
        }
    }

    int n; scanf("%d", &n);
    int isExists = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(digit[i][j] == n){
                isExists = 1;
            }
        }
    }

    if(isExists){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    return 0;
}