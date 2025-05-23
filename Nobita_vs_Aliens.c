#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int digit[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &digit[i]);
    }
 
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(digit[i] > digit[j]) {
                int temp = digit[i];
                digit[i] = digit[j];
                digit[j] = temp;
            }
        }
    }

    int count = 0;
    int i = 0, j = n - 1;

    while(i < j) {
        if(digit[i] + digit[j] <= k) {
            count++;
            i++;
            j--;
        } else {
            j--;  
        }
    }
    printf("%d", count);
    return 0;
}
