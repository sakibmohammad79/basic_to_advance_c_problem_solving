#include<stdio.h>
#include<limits.h>
int main()
{
    int n, index = 0;
    scanf("%d", &n);
    int arr[n];
   
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min_ops = INT_MAX;
    for(int i = 0; i<n; i++){
    
        if(min_ops > arr[i]){
            min_ops = arr[i];
        }
        
    }
   
    printf("%d ", min_ops);
    for(int i=0; i<n; i++){
        if(arr[i] == min_ops){
            index= i+1;
            break;
        }
    }
    printf("%d", index);
    return 0;
}

//optimized
// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int min_val = INT_MAX;
//     int index = -1;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] < min_val) {
//             min_val = arr[i];
//             index = i + 1; // 1-based index
//         }
//     }

//     printf("%d %d\n", min_val, index);
//     return 0;
// }
