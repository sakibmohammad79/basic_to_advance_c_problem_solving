#include<stdio.h>
#include<string.h>

int main()
{
    char s[200001];
    char t[200001];
  
    scanf("%s", s);
    scanf("%s", t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    int i = len_s - 1;
    int j = len_t - 1;

    int common = 0;

    while(i >= 0 && j >= 0 && s[i] == t[j]) {
        common++;
        i--;
        j--;
    }

    int result = (len_s - common) + (len_t - common);
    printf("%d\n", result);

    return 0;
}
