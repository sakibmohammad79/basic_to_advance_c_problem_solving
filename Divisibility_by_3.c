#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &digit);
        sum += digit;
    }

    if(sum % 3 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}