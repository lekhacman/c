#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, wl, state;

    state = OUT;
    wl = 0;

    int arr[10];

    for (int i = 0; i < 10; ++i) {
        arr[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++wl;

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;

            for (int i = 0; i < 10; ++i) {
                if (arr[i] == wl) {
                    break;
                } else if (arr[i] == 0) {
                    arr[i] = wl;
                    break;
                }
            }

            wl = 0;
        } else if (state == OUT) {
            state = IN;
        }
    }

    printf("Histogram:\n");
    for (int j = 0; j < 10; ++j) {
        if (arr[j] != 0) {
            printf("%d\t", arr[j]);
            for (int i = 0; i < arr[j]; ++i) {
                printf("=");
            }
            printf("\n");
        }
    }
}
