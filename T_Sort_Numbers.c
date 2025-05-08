#include <stdio.h>

int main() {
    int arr[3], asc[3];

    // Input
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        asc[i] = arr[i];   // Copy to asc
    }

    // Sort ascending
    for(int i = 0; i < 2; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(asc[i] > asc[j]) {
                int temp = asc[i];
                asc[i] = asc[j];
                asc[j] = temp;
            }
        }
    }

    // Output
    for(int i = 0; i < 3; i++) {
        printf("%d\n", asc[i]);
    }
    //print actual array
   printf("\n");
    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
