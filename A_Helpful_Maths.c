#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s", &a);
    int a_length = strlen(a);
    int digits[100], k = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= '1' && a[i] <= '3') {
            digits[k] = a[i] - '0';  
            k++;
        }
    }
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (digits[j] > digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        if (i > 0) printf("+"); 
        printf("%d", digits[i]);
    }

    return 0;
}