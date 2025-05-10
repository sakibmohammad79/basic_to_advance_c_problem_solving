#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int value;
    int free_officer = 0;
    int unreatedCase = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        if(value == -1){
            if(free_officer > 0){
                free_officer--;
            }
            else{
                unreatedCase++;
            }
        }

        if(value >= 0){
            free_officer += value;
        }
    }

    printf("%d", unreatedCase);
    return 0;
}