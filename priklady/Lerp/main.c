/*
* Priklad 10: Lerp - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/10-Interpolace
* Autor reseni: Jan Hruza
*/

//  Zadani
//  Napiste podprogram Lerp (Real v0, Real v1, Real t) => Real, ktery na provede linearni interpolaci mezi hodnotami v0 a v1 podle parametru t: t nalezi <0; 1>

//  Vstupy
//  v0 - hodnota v t = 0; desetinne cislo
//  v1 - hodnota v t = 1; desetinne cislo
//  t - parametr, pro ktery se hleda hodnota; desetinne cislo z intervalu < 0; 1 >

//  Vystup
//  linearni interpolace mezi hodnotami v0 a v1 podle parametru t

#include <stdio.h>

/// <summary>
/// Metoda pro vypocet hodnoty linearni interpolace.
/// </summary>
/// <param name="v0">Hodnota 1.</param>
/// <param name="v1">Hodnota 2.</param>
/// <param name="t">Parametr.</param>
/// <returns>Hodnotu linearni interpolace podle parametru.</returns>
double Lerp(double v0,
            double v1,
            double t)
{
    // vzorec pro vypocet linearni interpolace mezi dvema hodnotami: a + t(b - a)
    double result = v0 + t*(v1-v0);
    return result;
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    double v0, v1, t, lerp;
    v0 = 2;
    v1 = 6;
    t = 0.75;
    lerp = Lerp(v0, v1, t);

    printf("Pro body v0 = %lf, v1 = %lf:\nInterpolovana hodnota v t = %lf je %lf.\n", v0, v1, t, lerp);
    return 0;
}