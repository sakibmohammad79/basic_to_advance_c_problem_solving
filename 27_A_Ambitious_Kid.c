#include<stdio.h>
#include<limits.h>
int main()
{
    int i, n, value;
    scanf("%d", &n);
    int min_ops = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        if(value<0){
            value = -value; //make positive
        }
        if(value < min_ops){
            min_ops = value;
        }
    }
    printf("%d", min_ops);
    
    return 0;
}