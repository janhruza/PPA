/*
* Priklad 03: MetersToInches - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/03-M2In
* Autor reseni: Jan Hruza
*/

#include <stdio.h>

/// <summary>
/// Prevede delku v metrech (m) na delku v palcich (in).
/// </summary>
/// <param name="m">Delka v metrech.</param>
/// <returns>Zadanou delku v palcich.</returns>
double MetersToInches(double m)
{
	// 1 in = 2.54 cm => 1 m ~ 39.37 in
	return m * 39.37;
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
	// deklarace promennych
	double m, in;

	// nacteni vstupu
	printf("Zadej delku v metrech: ");
	scanf_s("%lf", &m);

	// provedeni vypoctu
	in = MetersToInches(m);

	// vypsani vysledku
	printf("%.2lf m je %.2lf in\n", m, in);
	return 0;
}
