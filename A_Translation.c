#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    int a_length = strlen(a);
    int b_length = strlen(b);
    int isMatched = 1; 

    for (int i = 0, j = b_length - 1; a[i] != '\0' && j >= 0; i++, j--) {
        
        if (a[i] != b[j] || a_length != b_length) {
            isMatched = 0; 
            break;
        }
    }

    if (isMatched) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
