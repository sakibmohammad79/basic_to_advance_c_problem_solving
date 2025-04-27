#include<stdio.h>

int main()
{
    int firstBananaPrice, ownDollars, bananaWants;
    scanf("%d %d %d", &firstBananaPrice, &ownDollars, &bananaWants);

    int totalBananaPrice = 0;
    for(int i = 1; i <= bananaWants; i++){
        totalBananaPrice += firstBananaPrice * i;
    }

    int borrow = totalBananaPrice - ownDollars;
    if(borrow <= 0){
        printf("0\n");
    }
    else{
        printf("%d\n", borrow);
    }

    return 0;
}
