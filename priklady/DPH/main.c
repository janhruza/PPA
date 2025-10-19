/*
* Ukol 06: DPH - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/06-DPH
* Autor reseni: Jan Hruza
*/

#include <stdio.h>

/// <summary>
/// Vypocte cenu s dani ze zadane ceny bez dane a danove sazby.
/// </summary>
/// <param name="price">Cena bez dane.</param>
/// <param name="vat">Danova sazba (v %).</param>
/// <returns>Celkovou cenu s dani.</returns>
double priceVAT(double price,
				int vat)
{
	return price + price * ((double)vat/100);
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
	// deklarace promennych
	double price, total;
	int vat;

	// nacteni vstupu
	printf("Zadej cenu bez DPH: ");
	scanf_s("%lf", &price);

	printf("Zadej dan (v %%): ");
	scanf_s("%d", &vat);

	// provedeni vypoctu
	total = priceVAT(price, vat);

	// vypis vysledku
	printf("Cena %.2lf s dani %d %% je %.2lf\n", price, vat, total);
	return 0;
}