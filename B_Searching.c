#include<stdio.h>
int main()
{
    int n, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int t;
    scanf("%d", &t);
    for(int i=0; i<n; i++){
        if(arr[i] == t){
            printf("%d", i);
            found = 1;
            break;
        }
     
    }
    if(found <= 0){
        printf("-1");
    }
    return 0;
}