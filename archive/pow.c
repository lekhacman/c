#include <stdio.h>

int pow(int base, int n);

int main() {
    for (int i = 0; i < 11; ++i) {
        printf("%d\t%d\t%d\n", i, pow(2, i), pow(-3, i));
    }

    return 0;
}


int pow(int base, int n) {
    int p = 1;

    for (int i = 0; i < n; ++i) {
        p *= base;
    }

    return p;
}
