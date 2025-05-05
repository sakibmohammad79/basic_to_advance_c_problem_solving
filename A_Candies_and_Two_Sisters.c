// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//         int value;
//         scanf("%d", &value);
//         if(value < 3) {
//             printf("0\n");  
//             continue;       
//         }

//         int count = 0;
//         for(int a = value - 1, b = 1; a > b; a--, b++) {
//             if((a + b) == value) {
//                 count++;
//             }
//         }
//         printf("%d\n", count);
//     }
//     return 0;
// }
//time limit hight in this code so we are use this law=>

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", (n - 1) / 2);
    }

    return 0;
}
