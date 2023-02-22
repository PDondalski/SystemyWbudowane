#include <stdio.h>
#include <stdlib.h>
/*Ponizsza metoda do zadania 2*/
void binary(unsigned int num){
    unsigned int mask=32768;
    printf("Odpowiednik binarny: ");

    while(mask > 0){
        if((num&mask) == 0)
            printf("0");
        else
            printf("1");
        mask = mask >> 1; //przesuniecie bitowe w prawo
    }
}

void main()
{
    /*
    Zadanie 1. Wyswietlanie XOR:

    int a=12, b=25;

    Sposób 1 (XOR + inne bramki):
    printf("AND output = %d\n", a & b);
    printf("OR output = %d\n", a | b);
    printf("XOR output = %d", a ^ b);

    Sposób 2 (sam XOR):
    printf("XOR output = %d", ((~a)&b) | (a&(~b)));
    return 0;
    */

/*
Zadanie 2:
1. Zaimplementuj zmiane liczby w systemie dziesietnym na liczbe
w systemie bitowym, uzywajac przesuniecia bitowego
2. Dodaj metode, która wyswietli wybrany bit danej liczby.
3. Dodaj metode, która zmieni wartosc wybranego bitu, nastepnie wyswietli
nowa wartosc liczby.
*/
    unsigned int num;
    printf("Wpisz liczbe dziesietna: ");
    scanf("%u",&num);
    binary(num);
    getchar();

    return 0;
}
