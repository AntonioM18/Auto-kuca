#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef HEADER_H
#define HEADER_H

#include "struktura.h"

#define MAX_AUTOMOBILI 60

typedef struct {
	char marka[50];
	int stanje;
	int cijena;
	int kilometraza;
	char boja[20];
	int snagaMotora;
	char vrstaGoriva[20];
} Automobil;

void listaAutomobila(Automobil automobili[], int brojAutomobila);
void traziVozilo(Automobil automobili[], int brojAutomobila, char trazenaMarka[]);
void filter(Automobil automobili[], int brojAutomobila, int opcija, int vrijednost);
void kupiAutomobil(Automobil automobili[], int brojAutomobila, const char kupnjaMarka[]);

#endif  // HEADER_H

