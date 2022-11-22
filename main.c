#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int f = 74;
    int e = 456;
    swap(&f, &e);
    printf("f = %i\n", f);
    printf("e = %i\n", e);
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
