#include "funkcija.h"

void printCarBrands(Automobil automobili[], int numAutomobili) {
    printf("Dostupne marke automobila:\n");
    for (int i = 0; i < numAutomobili; i++) {
        printf("%d. %s\n", i + 1, automobili[i].marka);
    }
}
