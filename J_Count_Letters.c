#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s", &a);
    int a_length = strlen(a);
    int freq[26] = {0};

    for(int i = 0; i<a_length; i++){
        int index = a[i] - 97;
        freq[index]++;
    }
    for(int i = 0; i<26; i++){
        if(freq[i] > 0){
            printf("%c : %d\n", i+97, freq[i]);
        }
    }
   
    return 0;
}