#include <stdio.h>

int main() {
    int c, nwhite, nother;

    int digit[10];

    for (int i = 0; i < 10; ++i) {
        digit[i] = 0;
    }


    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9') {
            ++digit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits = ");

    for (int j = 0; j < 10; ++j) {
        printf(" %d", digit[j]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}
