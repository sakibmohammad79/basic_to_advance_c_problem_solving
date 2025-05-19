#include<stdio.h>
int main()
{
    int k, t;
    scanf("%d %d", &k, &t);
    int quantity = 1;
    while (1)
    {
        if((k * quantity) % 10  == 0 || ( k * quantity) % 10 == t){
            break;
        }
        quantity++;
    }
    printf("%d", quantity);
    return 0;
}