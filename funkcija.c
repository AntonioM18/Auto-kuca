#include <stdio.h>
#include <string.h>
#include "header.h"

void listaAutomobila(Automobil automobili[], int brojAutomobila) {
    printf("Dostupne marke automobila:\n");
    for (int i = 0; i < brojAutomobila; i++) {
        printf("%d. %s\n", i + 1, automobili[i].marka);
    }
}

void traziVozilo(Automobil automobili[], int brojAutomobila, char trazenaMarka[]) {
    printf("Rezultati pretrage:\n");
    for (int i = 0; i < brojAutomobila; i++) {
        if (strcmp(automobili[i].marka, trazenaMarka) == 0) {
            printf("%s - Stanje: %d, Cijena: %d EUR, Kilometraza: %d km, Boja: %s, Snaga motora: %d KS, Vrsta goriva: %s\n",
                automobili[i].marka, automobili[i].stanje, automobili[i].cijena, automobili[i].kilometraza, automobili[i].boja,
                automobili[i].snagaMotora, automobili[i].vrstaGoriva);
        }
    }
}

void filter(Automobil automobili[], int brojAutomobila, int maksimalnaKilometraza, int maksimalnaCijena) {
    printf("Filtrirani rezultati:\n");
    for (int i = 0; i < brojAutomobila; i++) {
        if (automobili[i].kilometraza <= maksimalnaKilometraza && automobili[i].cijena <= maksimalnaCijena) {
            printf("%s - Stanje: %d, Cijena: %d EUR, Kilometraza: %d km, Boja: %s, Snaga motora: %d KS, Vrsta goriva: %s\n",
                automobili[i].marka, automobili[i].stanje, automobili[i].cijena, automobili[i].kilometraza, automobili[i].boja,
                automobili[i].snagaMotora, automobili[i].vrstaGoriva);
        }
    }
}




