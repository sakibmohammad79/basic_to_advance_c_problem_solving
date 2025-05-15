#include<stdio.h>

int main()
{
    int s, n;
    scanf("%d %d", &s, &n);
    long long int arr[s];

    for(int i = 0; i < s; i++){
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i < s - 1; i++){
        for(int j = i + 1; j < s; j++){
            if(arr[i] < arr[j]){ 
                long long int temp = arr[i];  
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int sum = 0;
    int count = 0;

    for(int i = 0; i < s && count < n; i++){
        if(arr[i] > 0){
            sum += arr[i];
            count++;
        }
    }

    printf("%lld\n", sum);
    return 0;
}
