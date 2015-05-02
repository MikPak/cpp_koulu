/*
* Tyˆn nimi: Hirsipuu-peli
* Kuvaus teht‰v‰st‰:

Hirsipuu-peli, jossa pelaajan on kirjaimia arvaamalla ratkaistava piilossa oleva sana.

* 17.11.2014
* Versio: 1.0
*/

#include "maarittely.h"
#include <windows.h>
#include <ctime>
#include <fstream>

void cls(HANDLE hConsole);
void DrawGallows(int state);

const int sanojen_lkm = 10, arvaukset = 5;

// Luodaan taulukko, jossa on kaikki arvuuteltavat sanat.
const string sanat[sanojen_lkm] = { "tulostin", "laskin", "televisio", "kitara", "kaiuttimet",
"kaappi", "kirja", "kasetti", "kello", "paperi" };

int main()
{

	HANDLE hStdout;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE); // Kahva konsoli-ikkunaan
	int arvaukset = 5;

	cout << "Pelataanko hirsipuuta? <k/e>\n";
	char valinta;
	cin >> valinta;

	while (tolower(valinta == 'k'))
	{
		clock_t kello_alku; // kellon alustus
		double kello;
		kello_alku = clock(); // kellon k‰ynnistys

		cls(hStdout); // Tyhjennet‰‰n ruutu

		srand(time(NULL));
		string sana = sanat[rand() % sanojen_lkm]; // Arvotaan sana, joka kysyt‰‰n.
		string bad_chars; // Ei-lˆydettyjen kirjainten s‰ilytyst‰ varten.

		// Alustetaan muuttuuja, joka n‰ytet‰‰n pelaajalle.
		int length = sana.length();
		string for_your_eyes_only(length, '-');

		DrawGallows(arvaukset);
		cout << endl << for_your_eyes_only << endl;

		while (arvaukset > 0 && sana != for_your_eyes_only)
		{
			// N‰ytet‰‰n sana ja kysyt‰‰n kirjain.
			cout << "Arvaa kirjain: ";
			char kirjain;
			cin >> kirjain;

			// Katsotaan onko k‰ytt‰j‰ jo arvannut kirjaimen.
			if (bad_chars.find(kirjain) != string::npos
				|| for_your_eyes_only.find(kirjain) != string::npos)
			{
				cout << "Olet jo arvannut sen kirjaimen. Yrit‰ uudelleen\n";
				continue;
			}

			// Alustetaan muuttuja joka tallentaa tiedon siit‰, monesko kirjain (alkio) on sanassa.
			int loc = sana.find(kirjain);

			// Tarkistetaan lˆytyykˆ kirjainta sanasta.
			if (loc == string::npos)
			{
				cout << "V\x84\x84rin!\n";
				Sleep(1200); // Arvauksen j‰lkeinen tauko
				cls(hStdout); // Tyhjennet‰‰n ruutu
				arvaukset--; // V‰hennet‰‰n j‰ljell‰ olevien arvausten m‰‰r‰‰.
				bad_chars += kirjain; // Lis‰t‰‰n ei-lˆytynyt kirjain kavereidensa joukkoon.
			}
			else // Kirjain lˆytyi.
			{
				cout << "Hyvin arvattu!\n";
				Sleep(1200); // Arvauksen j‰lkeinen tauko
				cls(hStdout); // Tyhjennet‰‰n ruutu

				// Sijoitetaan kirjain oikealle paikalleen.
				for_your_eyes_only[loc] = kirjain;

				// Pit‰‰ muistaa viel‰ tarkistaa, lˆytyykˆ kirjainta muualta sanasta:
				loc = sana.find(kirjain, loc + 1);
				while (loc != string::npos)
				{
					for_your_eyes_only[loc] = kirjain;
					loc = sana.find(kirjain, loc + 1);
				}
			}

			// Tulostetaan hirsipuu ja sana
			DrawGallows(arvaukset);
			cout << endl << for_your_eyes_only << endl;

			if (for_your_eyes_only != sana)
			{
				if (bad_chars.length() > 0)
					// N‰ytet‰‰n v‰‰rin arvatut kirjaimet helpotukseksi.
					cout << "V‰‰rin arvatut kirjaimet: " << bad_chars << endl;
				cout << arvaukset << " v‰‰r‰‰ arvausta j‰ljell‰.\n";
			}
		}
		kello = (clock() - kello_alku) / (double)CLOCKS_PER_SEC;  // kellotuksen lopetus

		// Tarkistetaan onko k‰ytt‰j‰ arvannut sanan.
		if (arvaukset > 0){
			cout << "Se oli oikein!\n";

			ofstream myfile;  // esitell‰‰n
			myfile.open("peli.txt"); // avataan peli.txt
			myfile << "Peli l‰pi ajassa " << kello << endl;
			myfile << "Oikea sana oli " << sana << endl; // tulostetaan tiedot tekstitiedostoon
			myfile.close(); // suljetaan tekstitiedosto

		}
		else{
			cout << "Valitettavasti sana on " << sana << ".\n";

			ofstream myfile;  // esitell‰‰n
			myfile.open("peli.txt"); // avataan peli.txt
			myfile << "H‰visit pelin ajassa " << kello << endl;
			myfile << "Oikea sana oli " << sana << endl; // tulostetaan tiedot tekstitiedostoon
			myfile.close(); // suljetaan tekstitiedosto

		}

		cout << "\n\n Pelisi kesti " << kello << " sekuntia. \n\n"; // kellotuksen tulostus
		cout << "Pelin tulos kansion juuressa, peli.txt \n";


		arvaukset = 5;
		// Kysyt‰‰n haluaako pelaaja pelata uudestaan.
		cout << endl << "Pelataanko uudestaan? <k/e>\n";
		cin >> valinta;
		valinta = tolower(valinta);
	}
	return 0;
}
