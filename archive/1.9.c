#include <stdio.h>

int main() {
    int c;

    int blankCounter = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blankCounter;
        } else {
            blankCounter = 0;
        }

        if (blankCounter <= 1) {
            putchar(c);
        }
    }

    return 0;
}

