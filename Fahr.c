#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    printf("Таблица соответствия температур по фаренгейту, температурам по цельсии:\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%6.0fF\t%6.1fC\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}