#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
   
    int max_ops = INT_MIN;
    int min_ops = INT_MAX;
    int maxIndex = 0;
    int minIndex = 0;
        for(int i = 0; i<n; i++){
        if(max_ops < arr[i]){
            max_ops = arr[i];
            maxIndex = i;
        } 
        if(min_ops > arr[i]){
            min_ops = arr[i];
            minIndex = i;
        } 
        
    }
    int temp;
    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp; 
    for(int i = 0 ; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}