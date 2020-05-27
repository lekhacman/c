#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void copy(char to[], char from[]);

void reverse(char result[], char from[]);

int getLine(char s[], int lim);

bool isEven(int number);

int main() {
    int len = 0;
    char line[MAX];

    while ((len = getLine(line, MAX)) > 0) {
        char reversed[len];
        reverse(reversed, line);
        printf("%s\n", reversed);
    }

    return 0;
}

int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = '\0';
    }

    return i;
}

void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

void reverse(char result[], char from[]) {
    int length = 0;

    while (from[length] != '\0') {
        length++;
    }
//    int length = sizeof(from) - 3;


    int bound = isEven(length) ? (length / 2) : ((length + 1) / 2);

//    printf("Size: %d\n", length);
//    printf("bound: %d\n", bound);

    for (int i = 0; i < bound; ++i) {
        int end = length - i - 1;
        result[i] = from[end];
        result[end] = from[i];
    }
}

bool isEven(int number) {
    int remainder = number % 2;

    if (remainder == 0) {
        return true;
    } else {
        return false;
    }
}
