#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
   for(int c = 1; c<=t; c++){
    char s[1005];
        scanf("%s", s);

        int freq[26] = {0}; 

 
        for (int i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;
        }

    
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd_count++;
            }
        }

       
        if (odd_count == 0 || odd_count == 1) {
            printf("0\n"); 
        } else {
            printf("%d\n", odd_count - 1); 
        }
   }

    return 0;
}
