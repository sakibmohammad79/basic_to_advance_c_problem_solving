#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int digit[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &digit[i][j]);
        }
    }

    for(int i = 0; i<r; i++){
        for(int j=c-1; j>=0; j--){
            printf("%d ", digit[i][j]);
        }
        printf("\n");
    }

    return 0;
}