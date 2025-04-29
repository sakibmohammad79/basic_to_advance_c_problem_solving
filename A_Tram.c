#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    int currectPassanger = 0;
    int maxCapacity = 0;
    for(int i = 1; i<= n; i++){
        scanf("%d %d", &a[i], &b[i]);
        currectPassanger -= a[i];
        currectPassanger += b[i];
        if(maxCapacity < currectPassanger){
            maxCapacity = currectPassanger;
        }
    }
    printf("%d", maxCapacity);
    return 0;
}