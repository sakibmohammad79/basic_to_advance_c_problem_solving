#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        int value = arr[i];
        if(value % 2 ==0){
            printf("%d\n", value);
        }
    }
    return 0;
}