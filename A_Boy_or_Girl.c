#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    int count = 0;
    int freq[26] = {0};
    
    scanf("%s", username);

    for (int i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a'; 
        freq[index] = 1; 
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
