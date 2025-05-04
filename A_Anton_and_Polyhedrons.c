#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char value[20];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", value);

        if (strcmp( value, "Tetrahedron") == 0) {
            sum += 4;
        } else if (strcmp(value, "Cube") == 0) {
            sum += 6;
        } else if (strcmp(value, "Octahedron") == 0) {
            sum += 8;
        } else if (strcmp(value,"Dodecahedron") == 0) {
            sum += 12;
        } else if (strcmp(value, "Icosahedron") == 0) {
            sum += 20;
        }
    }
    printf("%d\n", sum);
    return 0;
}
