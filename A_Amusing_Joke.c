#include<stdio.h>
#include<string.h>
int main()
{
    char guest[101], host[101], combined[202], fullName[101];
    scanf("%s", guest);
    scanf("%s", host);
    scanf("%s", fullName);

    strcpy(combined, guest);
    strcat(combined, host);

    int freq_a[26] = {0};
    for(int i = 0; combined[i] != '\0'; i++){
        int value = combined[i] - 'A';
        freq_a[value]++;
    }

    int freq_b[26] = {0};
    for(int i = 0; fullName[i] != '\0'; i++){
        int value = fullName[i] - 'A';  // ✅ এখানে ঠিক করা হয়েছে
        freq_b[value]++;
    }

    int isSame = 1;
    for(int i = 0; i < 26; i++){
        if(freq_a[i] != freq_b[i]){
            isSame = 0;
            break;
        }
    }

    if(isSame){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
