#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void zerosFill(int *data, int size) {
    for (int i = 0; i < size; i++) {
        data[i] = 0;
    }
}

void upperCase(char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        char c = ((int) text[i]);
        if (c >= 97 & c <= 122) {
            text[i] = c - 32;
        }
    }
    printf("\ntext = %s", text);
}

int main() {
//    int f = 74;
//    int e = 456;
//    swap(&f, &e);
//    printf("f = %i\n", f);
//    printf("e = %i\n", e);
//    printf("adres f = %u\n", &f);
//    printf("adres e = %u\n", &e);
//    int *p = &f;
//    printf("Wartosc p = %d\n", *p);
//    p = &e;
//    *p = 821;
//    printf("Wartosc p = %d\n", *p);
//    printf("Wartosc e = %d\n", e);
//    int g = add(&f, p);
//    printf("suma = %i\n", g);
//    int arr[] = {432, 7, 34, 12, 76, 90, 54};
//    int size = sizeof arr / 4;
//    zerosFill(arr, size);
//    printf("first = %i\n", arr[0]);
//    printf("last = %i\n", arr[size - 1]);
    char text[] = "Alamakota";
    upperCase(text);
    return 0;
}
