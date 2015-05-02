/*
*	Työn nimi: Harjoitus 18a (Palautus vko 46)
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:

Tee ohjelma, joka kysyy viiden koiran nimet ja iät.
Tiedot tallennetaan tietuetaulukkoon.
a) järjestä tiedot ikä -kentän mukaan suuruusjärjestykseen
(pienimmästä suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon näytälle.
b) järjestä tiedot nimi -kentän mukaan aakkosjärjestyksessä
Ohjelma tulostaa lopuksi jarjestetyn taulukon näytolle.

Lajittelu tulee toteuttaa siten, että se toimisi samoin
myäs 50 tai 5000 koiran tapauksssa.


Päivämäärä: 18.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

#define MAXLKM 100

using namespace std;

struct koirat {
	string nimi;
	int ika;
};

void lue_tiedot(koirat taulukko[], int &lkm)
{
	int i;

	for (i = 0; i<lkm; i++) {
		cout << "Anna koiran no. " << (i + 1) << " tiedot:\n";
		cout << "Nimi: ";
		getline(cin, taulukko[i].nimi);
		cout << "Ik\x84: ";
		cin >> taulukko[i].ika;
		cin.ignore(80, '\n');
		cout << endl;
	}
}

bool jarjesta_ika(const koirat& lhs, const koirat& rhs)
{
	return lhs.ika < rhs.ika;
}

void tulosta(koirat *taulukko, int lkm)
{
	for (int i = 0; i < lkm; ++i)
	{
		cout << taulukko[i].nimi << " | " << taulukko[i].ika << endl;
	}
}

int main() {

	int lkm = 5;

	koirat taulukko[5]; // Taulukko viidelle koiralle
	lue_tiedot(taulukko,lkm);
	sort(taulukko, taulukko + 5, jarjesta_ika);
	tulosta(taulukko,lkm);

}