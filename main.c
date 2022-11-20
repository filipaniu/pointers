#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int f = 74;
    int e = 456;
    printf("adres f = %u\n", &f);
    printf("adres e = %u\n", &e);
    int *p = &f;
    printf("Wartosc p = %d\n", *p);
    p = &e;
    *p = 821;
    printf("Wartosc p = %d\n", *p);
    printf("Wartosc e = %d\n", e);
    int g = add(&f, p);
    printf("suma = %i\n", g);
    return 0;
}
// Napisz funkcje ktora doda dwie liczby ktore sa do niej przekazane przez 2 wzkazniki
