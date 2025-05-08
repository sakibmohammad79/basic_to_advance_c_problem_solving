#include<stdio.h>
#include<limits.h>

void findMaxMin  (int* digit, int n) {
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i  = 0; i<n; i++){
        if(min > digit[i]){
            min = digit[i];
        }
        if(max < digit[i]){
            max = digit[i];
        }
        
    }
    printf("%d %d", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int digit[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &digit[i]);
    }
    findMaxMin(digit, n);
    return 0;
}