#include<stdio.h>
int main()
{
    int n, result = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c );
        int sum = a+b+c;
        if(sum >=2){
            result++;
        }
        
        
    }
    printf("%d", result);
   
    return 0;
}