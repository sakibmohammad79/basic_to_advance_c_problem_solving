#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int freq_a[26] = {0};
    int freq_b[26] = {0};

    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a != len_b) {
        printf("No\n");
        return 0;
    }

    for(int i = 0; a[i] != '\0'; i++){
        int value = a[i] - 'a';
        freq_a[value]++;
    }

    for(int i = 0; b[i] != '\0'; i++){
        int value = b[i] - 'a';
        freq_b[value]++;
    }


    for(int i = 0; i<26; i++){
        if(freq_a[i] != freq_b[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}