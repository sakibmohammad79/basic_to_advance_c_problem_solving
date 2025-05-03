#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int freq[101] = {0};
    int a, b, x;
    scanf("%d", &a);
    for(int i = 0; i<a; i++){
        scanf("%d", &x);
        freq[x] = 1;
    }
    scanf("%d", &b);
    for(int i = 0; i<b; i++){
        scanf("%d", &x);
        freq[x] = 1;
    }

    for(int i = 1; i<=n; i++){
        if(freq[i] == 0){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");
    
    return 0;
}