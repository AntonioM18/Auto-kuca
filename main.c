#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "funkcija.h"


int main() {
	Automobil automobili[MAX_AUTOMOBILI];
	//inicijalizacija automobila
	strcpy(automobili[0].marka, "Abarth");
	automobili[0].stanje = 16;
	strcpy(automobili[1].marka, "Alfa Romeo");
	automobili[1].stanje = 24;
	strcpy(automobili[2].marka, "Aston Martin");
	automobili[2].stanje = 6;
	strcpy(automobili[3].marka, "Audi");
	automobili[3].stanje = 22;
	strcpy(automobili[4].marka, "Bentley");
	automobili[4].stanje = 5;
	strcpy(automobili[5].marka, "BMW");
	automobili[5].stanje = 29;
	strcpy(automobili[6].marka, "Bugatti");
	automobili[6].stanje = 2;
	strcpy(automobili[7].marka, "Cadillac");
	automobili[7].stanje = 12;
	strcpy(automobili[8].marka, "Chevrolet");
	automobili[8].stanje = 20;
	strcpy(automobili[9].marka, "Chrysler");
	automobili[9].stanje = 10;
	strcpy(automobili[10].marka, "Citroen");
	automobili[10].stanje = 32;
	strcpy(automobili[11].marka, "Corvette");
	automobili[11].stanje = 4;
	strcpy(automobili[12].marka, "Cupra");
	automobili[12].stanje = 15;
	strcpy(automobili[13].marka, "Dacia");
	automobili[13].stanje = 31;
	strcpy(automobili[14].marka, "Dodge");
	automobili[14].stanje = 11;
	strcpy(automobili[15].marka, "DS Automobiles");
	automobili[15].stanje = 2;
	strcpy(automobili[16].marka, "Ferrari");
	automobili[16].stanje = 9;
	strcpy(automobili[17].marka, "Fiat");
	automobili[17].stanje = 19;
	strcpy(automobili[18].marka, "Ford");
	automobili[18].stanje = 35;
	strcpy(automobili[19].marka, "GMC");
	automobili[29].stanje = 4;
	strcpy(automobili[20].marka, "Honda");
	automobili[20].stanje = 18;
	strcpy(automobili[21].marka, "Hummer");
	automobili[21].stanje = 5;
	strcpy(automobili[22].marka, "Hyundai");
	automobili[22].stanje = 28;
	strcpy(automobili[23].marka, "Infiniti");
	automobili[23].stanje = 7;
	strcpy(automobili[24].marka, "Isuzu");
	automobili[24].stanje = 5;
	strcpy(automobili[25].marka, "Jaguar");
	automobili[25].stanje = 11;
	strcpy(automobili[26].marka, "Jeep");
	automobili[26].stanje = 14;
	strcpy(automobili[27].marka, "Kia");
	automobili[27].stanje = 33;
	strcpy(automobili[28].marka, "Koenigsegg");
	automobili[28].stanje = 4;
	strcpy(automobili[29].marka, "Lada");
	automobili[29].stanje = 10;
	strcpy(automobili[30].marka, "Lamborghini");
	automobili[30].stanje = 8;
	strcpy(automobili[31].marka, "Lancia");
	automobili[31].stanje = 12;
	strcpy(automobili[32].marka, "Land Rover");
	automobili[32].stanje = 22;
	strcpy(automobili[33].marka, "Lexus");
	automobili[33].stanje = 8;
	strcpy(automobili[34].marka, "Lotus");
	automobili[34].stanje = 10;
	strcpy(automobili[35].marka, "Maserati");
	automobili[35].stanje = 12;
	strcpy(automobili[36].marka, "Maybach");
	automobili[36].stanje = 3;
	strcpy(automobili[37].marka, "Mazda");
	automobili[37].stanje = 43;
	strcpy(automobili[38].marka, "McLaren");
	automobili[38].stanje = 7;
	strcpy(automobili[39].marka, "Mercedes");
	automobili[39].stanje = 50;
	strcpy(automobili[40].marka, "MINI");
	automobili[40].stanje = 23;
	strcpy(automobili[41].marka, "Mitsubishi");
	automobili[41].stanje = 15;
	strcpy(automobili[42].marka, "Nissan");
	automobili[42].stanje = 17;
	strcpy(automobili[43].marka, "Opel");
	automobili[43].stanje = 46;
	strcpy(automobili[44].marka, "Pagani");
	automobili[44].stanje = 2;
	strcpy(automobili[45].marka, "Peugeot");
	automobili[45].stanje = 36;
	strcpy(automobili[46].marka, "Porsche");
	automobili[46].stanje = 17;
	strcpy(automobili[47].marka, "Renault");
	automobili[47].stanje = 26;
	strcpy(automobili[48].marka, "Rolls-Royce");
	automobili[48].stanje = 1;
	strcpy(automobili[49].marka, "Seat");
	automobili[49].stanje = 36;
	strcpy(automobili[50].marka, "Skoda");
	automobili[50].stanje = 38;
	strcpy(automobili[51].marka, "Smart");
	automobili[51].stanje = 12;
	strcpy(automobili[52].marka, "Subaru");
	automobili[52].stanje = 20;
	strcpy(automobili[53].marka, "Suzuki");
	automobili[53].stanje = 30;
	strcpy(automobili[54].marka, "Tesla");
	automobili[54].stanje = 2;
	strcpy(automobili[55].marka, "Toyota");
	automobili[55].stanje = 28;
	strcpy(automobili[56].marka, "Trabant");
	automobili[56].stanje = 1;
	strcpy(automobili[57].marka, "Volkswagen");
	automobili[57].stanje = 46;
	strcpy(automobili[58].marka, "Wartburg");
	automobili[58].stanje = 1;
	strcpy(automobili[59].marka, "WEY");
	automobili[59].stanje = 3;

	printCarBrands(automobili, MAX_AUTOMOBILI);

	int odabraniAutomobil;
	printf("\nOdaberite redni broj automobila: ");
	scanf("%d", &odabraniAutomobil);

	if (odabraniAutomobil >= 1 && odabraniAutomobil <= MAX_AUTOMOBILI) {
		int indeks = odabraniAutomobil - 1;
		printf("Stanje automobila %s: %d\n", automobili[indeks].marka, automobili[indeks].stanje);
	}
	else {
		printf("Pogrešan odabir automobila\n");
	}

	return 0;
}