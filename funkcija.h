#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef FUNKCIJA_H
#define FUNKCIJA_H

#include "header.h"


void listaAutomobila(Automobil automobili[], int brojAutomobila);

void traziVozilo(Automobil automobili[], int brojAutomobila, char trazenaMarka[]);

void filter(Automobil automobili[], int brojAutomobila, int opcija, int vrijednost);

void kupiAutomobil(Automobil automobili[], int brojAutomobila, const char kupnjaMarka[]);

#endif

