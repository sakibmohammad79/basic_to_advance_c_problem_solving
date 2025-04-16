#include<stdio.h>
int main()
{
    int i, n,  count=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        // int value = arr[i];
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}