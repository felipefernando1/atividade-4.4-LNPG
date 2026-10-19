int maior(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) { 
        return b;
    } else
        return 0;
}

long fatorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}