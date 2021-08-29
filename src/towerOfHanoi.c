#include <stdio.h>

void towerOfHanoi(int n, char x, char y, char z) {
    if (n > 0) {
        towerOfHanoi(n - 1, x, z, y);
        printf("Move %c to %c\n", x, y);
        towerOfHanoi(n - 1, z, y, x);
    }
}

int main() {
    int n = 5;
    towerOfHanoi(n, 'A', 'B', 'C');
}
