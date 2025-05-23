#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array so the largest number (a+b+c) is at the end
    qsort(arr, 4, sizeof(int), cmpfunc);

    int sum_abc = arr[3];
    int ab = arr[0];
    int ac = arr[1];
    int bc = arr[2];

    int a = sum_abc - bc;
    int b = sum_abc - ac;
    int c = sum_abc - ab;

    // Put a,b,c in an array to print sorted
    int result[3] = {a, b, c};
    qsort(result, 3, sizeof(int), cmpfunc);

    printf("%d %d %d\n", result[0], result[1], result[2]);

    return 0;
}
