#include <stdio.h>

int main() {
    int blankCounter = 0;
    int tabCounter = 0;
    int lineCounter = 0;

    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\n':
                ++lineCounter;
                break;
            case '\t':
                ++tabCounter;
                break;
            case ' ':
                ++blankCounter;
                break;
            default:
                ;
        }
    }

    printf("total blanks: %d\n", blankCounter);
    printf("total tabs: %d\n", tabCounter);
    printf("total lines: %d\n", lineCounter);
    return 0;
}

