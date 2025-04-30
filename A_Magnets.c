#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][3];

    for(int i = 0; i<n; i++){
        scanf("%s", arr[i]);
    }
    int groupCount = 1;
    for (int i = 1; i<n; i++)
    {
        if(arr[i][0] != arr[i-1][0] || arr[i][1] != arr[i-1][1]){
            groupCount++;
        }
    }
    printf("%d", groupCount);
    return 0;
}