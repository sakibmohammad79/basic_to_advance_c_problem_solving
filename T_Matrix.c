#include<stdio.h>
#include<math.h>
int main()
{
    int n; scanf("%d", &n);
    int digit[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &digit[i][j]);
        }
    }

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for(int i = 0; i<n; i++){
        for(int j= 0; j<n; j++){
            if(i==j){
                primary_diagonal_sum += digit[i][j];
            }

            if(i+j == n - 1){
                secondary_diagonal_sum += digit[i][j];
            }
        }
    }
   int sum_result = abs(primary_diagonal_sum - secondary_diagonal_sum);
    printf("%d", sum_result);
    return 0;
}