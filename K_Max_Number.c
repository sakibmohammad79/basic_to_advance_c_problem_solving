#include <stdio.h>

long long int findMax(long long int arr[], int n) {
    if (n == 1) {
        return arr[0];  
    }
   long long rest_value = findMax(arr, n-1);
   if(arr[n-1] > rest_value){
    return arr[n-1];
   }
   else{
    return rest_value;
   }
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long int max = findMax(arr, n);
    printf("%lld\n", max);

    return 0;
}
