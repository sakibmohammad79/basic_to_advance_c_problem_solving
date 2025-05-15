#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
    }


    int freq = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            freq++;
        }
    }


    if(freq % 2 == 1){
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
