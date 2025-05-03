#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int a[100];  
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];           // Assume first is max
    int maxIndex = 0;         // Index of tallest soldier

    int min = a[0];           // Assume first is min
    int minIndex = 0;         // Index of shortest soldier

    // Find index of first tallest and last shortest
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] <= min) {  // <= so we get the last min
            min = a[i];
            minIndex = i;
        }
    }

    // Total moves = steps to bring max to front + min to end
    int moves = maxIndex + (n - 1 - minIndex);

    // If max is before min, no problem
    // If max is after min, then min will move right after max swaps
    if (maxIndex > minIndex) {
        moves = moves - 1;
    }

    printf("%d\n", moves);  // Output the answer

    return 0;
}
