#include<stdio.h>
int main()
{
    int r, c; 
    scanf("%d %d", &r, &c);
    
    if(r != c){
        printf("It's not unit matrix!");
        return 0;
    }

    int digit[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &digit[i][j]);
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i != j){
                if(digit[i][j] != 0){
                    printf("It's not unit matrix!");
                    return 0;
                }
            } else {
                if(digit[i][j] != 1){
                    printf("It's not unit matrix!");
                    return 0;
                }
            }
        }
    }

    printf("It's unit matrix");
    return 0;
}
