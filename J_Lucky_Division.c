#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        int is_lucky = 1; 

      
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                is_lucky = 0; 
                break;
            }
            num = num / 10;
        }

        
        if (is_lucky && n % i == 0) {
            printf("YES\n");
            return 0;
        }
    }

  
    printf("NO\n");
    return 0;
}
