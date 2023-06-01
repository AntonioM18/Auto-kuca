#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "funkcija.h"



void listaAutomobila(const Automobil automobili[], int brojAutomobila) {
	if (brojAutomobila <= 0) {
		printf("Nema dostupnih automobila.\n");
		return;
	}

	printf("Dostupne marke automobila:\n");
	for (int i = 0; i < brojAutomobila; i++) {
		printf("%d. %s\n", i + 1, automobili[i].marka);
	}
}

void traziVozilo(const Automobil automobili[], int brojAutomobila, const char trazenaMarka[]) {
	if (brojAutomobila <= 0) {
		printf("Nema dostupnih automobila.\n");
		return;
	}

	printf("Rezultati pretrage:\n");
	int found = 0;
	for (int i = 0; i < brojAutomobila; i++) {
		if (strcmp(automobili[i].marka, trazenaMarka) == 0) {
			found = 1;
			printf("%s - Stanje: %d, Cijena: %d EUR, Kilometraza: %d km, Boja: %s\n",
				automobili[i].marka, automobili[i].stanje, automobili[i].cijena, automobili[i].kilometraza, automobili[i].boja);
		}
	}

	if (!found) {
		printf("Nije pronaden automobil s markom '%s'.\n", trazenaMarka);
	}
}

void filter(const Automobil automobili[], int brojAutomobila, int opcija, int vrijednost) {
	if (brojAutomobila <= 0) {
		printf("Nema dostupnih automobila.\n");
		return;
	}

	printf("Filtrirani rezultati:\n");
	int found = 0;
	for (int i = 0; i < brojAutomobila; i++) {
		int zadovoljavaFilter = 0;

		switch (opcija) {
		case 1:  // Cijena
			if (automobili[i].cijena <= vrijednost) {
				zadovoljavaFilter = 1;
			}
			break;
		case 2:  // Kilometraža
			if (automobili[i].kilometraza <= vrijednost) {
				zadovoljavaFilter = 1;
			}
			break;
		default:
			printf("Pogresna opcija filtera.\n");
			return;
		}

		if (zadovoljavaFilter) {
			found = 1;
			printf("%s - Stanje: %d, Cijena: %d EUR, Kilometraza: %d km, Boja: %s\n",
				automobili[i].marka, automobili[i].stanje, automobili[i].cijena, automobili[i].kilometraza, automobili[i].boja);
		}
	}

	if (!found) {
		printf("Nema automobila koji zadovoljavaju zadani filter.\n");
	}
}

void kupiAutomobil(Automobil automobili[], int brojAutomobila, const char kupnjaMarka[]) {
	if (brojAutomobila <= 0) {
		printf("Nema dostupnih automobila.\n");
		return;
	}

	for (int i = 0; i < brojAutomobila; i++) {
		if (strcmp(automobili[i].marka, kupnjaMarka) == 0) {
			printf("Hvala na kupnji naseg vozila!\n");
			automobili[i].stanje -= 1;
			automobili[i].cijena += 500;
			automobili[i].kilometraza -= 10000;
			strcpy(automobili[i].boja, "Nova Boja");
			// Code to remove the car from the list if desired
			return;
		}
	}
	printf("Automobil '%s' nije pronaden.\n", kupnjaMarka);
}


void oslobodiMemoriju(Automobil* automobili, int brojAutomobila) {
	for (int i = 0; i < brojAutomobila; i++) {
		free(automobili[i].marka);
		free(automobili[i].boja);
	}
}
