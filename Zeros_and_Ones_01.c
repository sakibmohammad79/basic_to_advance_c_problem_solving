#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value[n];
    int count[2] = {0};
    for(int i = 0; i<n; i++){
        scanf("%d", &value[i]);
        int val = value[i];
        count[val]++;
    }

    for(int j = 0; j<2; j++){
        printf("%d ", count[j]);
    }
    return 0;
}