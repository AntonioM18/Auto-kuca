#define _CRT_SECURE_NO_WARNINGS
#include "main.h"
#include "header.h"

int main() {
    int opcija;

    printf("Dobro došli!\n");

    do {
        printf("\nOdaberite opciju:\n");
        printf("1. Pregled automobila\n");
        printf("2. Pregled motocikala\n");
        printf("3. Napusti auto kuću\n");
        printf("Vaš odabir: ");
        scanf("%d", &opcija);

        switch (opcija) {
        case 1:
        {
            int podopcija;

            do {
                printf("\nOdaberite opciju:\n");
                printf("1. Prikazi listu automobila\n");
                printf("2. Trazi automobil\n");
                printf("3. Natrag\n");
                printf("Vaš odabir: ");
                scanf("%d", &podopcija);

                switch (podopcija) {
                case 1:
                    prikaziListuAutomobila();
                    break;
                case 2:
                    traziAutomobil();
                    break;
                case 3:
                    break;
                default:
                    printf("\nNepostojeća opcija. Molimo odaberite ponovno.\n");
                    break;
                }
            } while (podopcija != 3);
        }
        break;
        case 2:
        {
            int podopcija;

            do {
                printf("\nOdaberite opciju:\n");
                printf("1. Prikazi listu motocikala\n");
                printf("2. Trazi motocikl\n");
                printf("3. Natrag\n");
                printf("Vaš odabir: ");
                scanf("%d", &podopcija);

                switch (podopcija) {
                case 1:
                    prikaziListuMotocikala();
                    break;
                case 2:
                    traziMotocikl();
                    break;
                case 3:
                    break;
                default:
                    printf("\nNepostojeća opcija. Molimo odaberite ponovno.\n");
                    break;
                }
            } while (podopcija != 3);
        }
        break;
        case 3:
            printf("\nPozdrav!\n");
            return 0;
        default:
            printf("\nNepostojeća opcija. Molimo odaberite ponovno.\n");
            break;
        }
    } while (opcija != 3);

    return 0;
}




