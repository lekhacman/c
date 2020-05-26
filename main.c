#include <stdio.h>

float fToC(float fahr);
float cToF(float celsius);

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    printf("Hello, World!\n");

    float fahr, celsius;


    fahr = LOWER;

    printf("Fahr\tCelsius\n");
    while (fahr <= UPPER) {
        celsius = fToC(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);

        fahr += STEP;
    }

    printf("Celsius\tFahr\n");
    for (float i = 0; i < UPPER; i += STEP) {
        printf("%3.0f\t%6.1f\n", i, cToF(i));
    }

    return 0;
}

float fToC(float fahr) {
    return 5.0 * (fahr - 32) / 9.0
}

float cToF(float celsius) {
    return celsius * 9.0 / 5.0 + 32;
}
