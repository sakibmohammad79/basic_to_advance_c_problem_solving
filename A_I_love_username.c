#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int value[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &value[i]);
    }

    int max = value[0], min=value[0], isAmazing = 0;

    for(int i = 1; i<n; i++){
        if(max<value[i]){
            max = value[i];
            isAmazing++;
        }
        else if(min>value[i]){
            min = value[i];
            isAmazing++;
        }
    }
    printf("%d", isAmazing);
    return 0;
}