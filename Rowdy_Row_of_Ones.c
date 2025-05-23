#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int freq[r];
    for(int i = 0; i < r; i++) {
        freq[i] = 0; 
        for(int j = 0; j < c; j++) {
            if(matrix[i][j] == 1) {
                freq[i]++;
            }
        }
    }

    int maxIndex = 0;
    for(int i = 1; i < r; i++) {
        if(freq[i] > freq[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("%d\n", maxIndex);
    return 0;
}
