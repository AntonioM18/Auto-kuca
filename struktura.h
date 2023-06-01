#define _CRT_SECURE_NO_WARNINGS
#ifndef STRUKTURA_H
#define STRUKTURA_H

#define MAX_MARKA_LENGHT 50
#define MAX_BOJA_LENGHT 20


typedef struct {
	char marka[MAX_MARKA_LENGHT];
	int stanje;
	int cijena;
	int kilometraza;
	char boja[MAX_BOJA_LENGHT];
	int snagaMotora;
	char vrstaGoriva[20];
} Automobil;

#endif //STRUKTURA_H