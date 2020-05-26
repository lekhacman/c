#include <stdio.h>

int main() {
    int c;
    int counter = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
            case '\t':
            case '\n':
                ++counter;
                break;
            default:
                break;
        }
    }

    printf("Total: %d\n", counter);
    return 0;
}
