#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[10] = {0};
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        int value = arr[i];
        freq[value]++;
    }
    
    for(int i = 0; i<=9; i++){
        printf("%d => %d\n", i, freq[i]);
    }
    return 0;
}