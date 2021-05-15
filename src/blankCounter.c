#include <stdio.h>

int main() {
    char c;
    int blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blank++;
        } else {
            blank = 0;
        }

        if (blank < 2) {
            putchar(c);
        }
    }
}
