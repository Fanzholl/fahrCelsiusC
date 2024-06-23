#include <stdio.h>

int main(void) {
    float fahr, celsius, lower = -17.8, upper = 148.9, step = 11.1;

    celsius = lower;
    printf("Таблица соответствия температур по цельсии, температурам по фаренгейту:\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%6.1fC\t%6.0fF\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}