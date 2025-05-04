#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int home[n], guest[n];

    // ইনপুট গ্রহণ
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &home[i], &guest[i]);
    }

    int count = 0;

    // প্রত্যেক হোস্ট দল ও গেস্ট দলের ম্যাচ চেক করবো
    for(int i = 0; i < n; i++) {       // হোস্ট দল
        for(int j = 0; j < n; j++) {   // গেস্ট দল
            if(i != j && home[i] == guest[j]) {
                count++; // হোস্টকে গেস্ট ইউনিফর্ম পরতে হবে
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
