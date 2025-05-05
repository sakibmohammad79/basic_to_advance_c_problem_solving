#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);  // n = row, m = column

    for (int i = 1; i <= row; i++) {
        if (i % 2 == 1) {
            // বিজোড় নম্বর row → পুরো # (#####)
            for (int j = 1; j <= col; j++) {
                printf("#");
            }
        } else if (i % 4 == 0) {
            // 4 দিয়ে বিভাজ্য (4th, 8th...) → শুরুতে #, তারপর .
            printf("#");
            for (int j = 2; j <= col; j++) {
                printf(".");
            }
        } else {
            // অন্য জোড় নম্বর (2nd, 6th...) → শেষে #, আগে .
            for (int j = 1; j < col; j++) {
                printf(".");
            }
            printf("#");
        }
        printf("\n"); // পরবর্তী লাইনে যাও
    }

    return 0;
}
