#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int pi;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &pi); 
        sum += pi;
    }

    double result = sum / n; 
    printf("%.12lf\n", result); 

    return 0;
}

