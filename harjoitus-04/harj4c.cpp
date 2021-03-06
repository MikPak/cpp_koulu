#include <iostream> // Sisällytetään iostream-otsikko
#define MINIMI 10 // Määritellään esikääntäjälle vakio

using namespace std; // Valitaan käyttöön std-nimiavaruus

int summa; // Alustetaan muuttuja
void Laske(int, int); // Määritellään funktio Laske

void main(void) // Ohjelman suoritus alkaa
{
	const int MAKSIMI = 20; // Määritellään kääntäjälle vakio
	int luku1 = 2;
	int luku2;

	cout << "Syötä luku: ";
	cin >> luku2;

	Laske(luku1, luku2);

	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI << endl;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI << endl;
	else if(summa > MINIMI && summa < MAKSIMI) {
		cout << "Summa on " << MINIMI << " ja " << MAKSIMI << " v\x84liss\x84" << endl;
	}

}

void Laske(int eka, int toka)
{
	summa = eka + toka;
	cout << summa << endl;
}
