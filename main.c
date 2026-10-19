#include <stdio.h>
#include "mathlib.h"

int main() {
    int x = 10, y = 5;

    printf("O maior entre: %d e %d é: %d.\n", x, y, maior(x, y));

    int n = 5;

    printf("O fatorial de %d é: %ld.\n", n, fatorial(n));

    return 0;
}