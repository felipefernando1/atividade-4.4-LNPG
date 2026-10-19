#include <stdio.h>

void divmod(int a, int b, int *q, int *r) {
    *q = a / b;
    *r = a % b;
}

int main() {
    int a, b, q = 0, r = 0;
    printf("Informe o valor de a e b.\n");
    scanf("%d %d", &a, &b);
    divmod(a, b, &q, &r);
    printf("Dividendo e divisor: %d e %d.\n", a, b);
    printf("Quociente: %d, Resto: %d\n", q, r);

    return 0;
}