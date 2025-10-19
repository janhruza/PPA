// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Ukol 2: Kino
 */

#include <stdio.h>
#include "timespan.h"

int main(void)
{
	timespan film1;
	timespan film2;
	timespan delka1;
	timespan delka2;

	int konec1;

	// film A
	printf("Film A\n");
	printf("zacatek filmu A (hodina): ");
	scanf_s("%d", &film1.hours);

	printf("zacatek filmu A (minuta): ");
	scanf_s("%d", &film1.minutes);

	printf("delka filmu A (hodina): ");
	scanf_s("%d", &delka1.hours);

	printf("delka filmu A (minuta): ");
	scanf_s("%d", &delka1.minutes);

	printf("\nFilm B\n");

	// film B
	printf("zacatek filmu B (hodina): ");
	scanf_s("%d", &film2.hours);

	printf("zacatek filmu B (minuta): ");
	scanf_s("%d", &film2.minutes);

	printf("delka filmu B (hodina): ");
	scanf_s("%d", &delka2.hours);

	printf("delka filmu B (minuta): ");
	scanf_s("%d", &delka2.minutes);
	printf("\n");

	// vyhodnoti vysledek
	
	// kino funguje od 14:00 do 03:00
	if (film1.hours < 14)
	{
		film1.hours += 24;
	}

	if (film2.hours < 14)
	{
		film2.hours += 24;
	}

	// prevod vsech casovych udaju na minuty
	int startA_minuty = film1.hours * 60 + film1.minutes;
	int delkaA_minuty = delka1.hours * 60 + delka1.minutes;
	int konecA_minuty = startA_minuty + delkaA_minuty;

	int startB_minuty = film2.hours * 60 + film2.minutes;
	int delkaB_minuty = delka2.hours * 60 + delka2.minutes;
	int konecB_minuty = startB_minuty + delkaB_minuty;

	if (startB_minuty >= konecA_minuty)
	{
		printf("doporuceni: v pohode");
	}

	else if (konecB_minuty < konecA_minuty)
	{
		printf("doporuceni: to nedas");
	}

	else
	{
		printf("doporuceni: neuvidis %d minut", konecA_minuty - startB_minuty);
	}

	printf("\n");
	return 0;
}