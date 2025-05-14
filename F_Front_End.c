#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int digit[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &digit[i]);
    }

    for(int i = 0, j = n - 1; i <= j; i++, j--){
        if(i == j){
            printf("%d", digit[i]);  
        } else {
            printf("%d %d ", digit[i], digit[j]);
        }
    }

    return 0;
}
