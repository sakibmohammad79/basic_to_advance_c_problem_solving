#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int c = 0; c < t; c++){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        int min_ops = INT_MAX;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int temp = arr[i] + arr[j] + (j - i); 
                if(temp < min_ops){
                    min_ops = temp;
                }
            }
        }

        printf("%d\n", min_ops);
    }
    return 0;
}
