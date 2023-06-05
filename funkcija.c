#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

void prikaziListuAutomobila() {
    FILE* datoteka;
    char red[100];

    datoteka = fopen("automobili.txt", "r");

    if (datoteka == NULL) {
        printf("Greška pri otvaranju datoteke.\n");
        return;
    }

    while (fgets(red, sizeof(red), datoteka) != NULL) {
        printf("%s", red);
    }

    fclose(datoteka);
}

void traziAutomobil() {
    int opcija;

    do {
        printf("\nOdaberite opciju:\n");
        printf("1. Ime automobila\n");
        printf("2. Cijena\n");
        printf("3. Kilometraza\n");
        printf("4. Gorivo\n");
        printf("5. Natrag\n");
        printf("Vaš odabir: ");
        scanf("%d", &opcija);

        switch (opcija) {
        case 1:
            pretraziAutomobilePoImenu();
            break;
        case 2:
        {
            int cijena;
            printf("\nUnesite cijenu: ");
            scanf("%d", &cijena);
            pretraziAutomobilePoCijeni(cijena);
        }
        break;
        case 3:
        {
            int kilometraza;
            printf("\nUnesite kilometražu: ");
            scanf("%d", &kilometraza);
            pretraziAutomobilePoKilometrazi(kilometraza);
        }
        break;
        case 4:
            pretraziAutomobilePoGorivu();
            break;
        case 5:
            break;
        default:
            printf("\nNepostojeća opcija. Molimo odaberite ponovno.\n");
            break;
        }
    } while (opcija != 5);
}

void prikaziListuMotocikala() {
    FILE* datoteka;
    char red[100];

    datoteka = fopen("motocikli.txt", "r");

    if (datoteka == NULL) {
        printf("Greška pri otvaranju datoteke.\n");
        return;
    }

    while (fgets(red, sizeof(red), datoteka) != NULL) {
        printf("%s", red);
    }

    fclose(datoteka);
}

void traziMotocikl() {
    int opcija;

    do {
        printf("\nOdaberite opciju:\n");
        printf("1. Ime motocikla\n");
        printf("2. Cijena\n");
        printf("3. Kilometraza\n");
        printf("4. Natrag\n");
        printf("Vaš odabir: ");
        scanf("%d", &opcija);

        switch (opcija) {
        case 1:
            pretraziMotociklePoImenu();
            break;
        case 2:
        {
            char cijena[100];
            printf("\nUnesite cijenu: ");
            scanf("%s", cijena);
            pretraziMotociklePoCijeni(cijena);
        }
        break;
        case 3:
        {
            char kilometraza[100];
            printf("\nUnesite kilometražu: ");
            scanf("%s", kilometraza);
            pretraziMotociklePoKilometrazi(kilometraza);
        }
        break;
        case 4:
            break;
        default:
            printf("\nNepostojeća opcija. Molimo odaberite ponovno.\n");
            break;
        }
    } while (opcija != 4);
}
