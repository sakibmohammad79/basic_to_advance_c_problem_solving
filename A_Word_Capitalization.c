#include<stdio.h>

int main() {
    char word[104];
    scanf("%s", word);

    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] = word[0] - 32; 
    }

    printf("%s\n", word);

    return 0;
}
