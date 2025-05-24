#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0; 

    for (int i = a; i <= b; i++) {
        int odd = 0, even = 0, n = i;

        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 == 0){
                even++;
            }
            else{ 
                odd++;
            }
            n = n / 10;
        }

        if (odd == even) {
            printf("%d\n", i);
            found = 1; 
        }
    }

    if (!found) {
        printf("-1\n"); 
    }

    return 0;
}
