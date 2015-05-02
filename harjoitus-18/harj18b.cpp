/*
*	Ty�n nimi: Harjoitus 18b (Palautus vko 46)
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:

Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
Tiedot tallennetaan tietuetaulukkoon.
a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
(pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon n�yt�lle.
b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.

Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
my�s 50 tai 5000 koiran tapauksssa.


P�iv�m��r�: 18.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

struct koirat {
	string nimi;
	int ika;
	char nimi2[50];
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

bool jarjesta_nimi(const koirat& lhs, const koirat& rhs)
{
	return lhs.nimi < rhs.nimi;
}

void tulosta(koirat *taulukko, int lkm)
{
	for (int i = 0; i < lkm; ++i)
	{
		cout << taulukko[i].nimi << " | " << taulukko[i].ika << endl;
	}
}

int main() {

	int lkm = 5; // Koirien lukum��r�

	koirat taulukko[5]; // Taulukko viidelle koiralle
	lue_tiedot(taulukko, lkm); // Luetaan koirien tiedot
	sort(taulukko, taulukko + 5, jarjesta_nimi); // J�rjestet��n nimen mukaan
	tulosta(taulukko, lkm); // Tulostetaan taulukko

}