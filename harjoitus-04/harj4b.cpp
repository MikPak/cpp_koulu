#include <iostream> // Sis�llytet��n iostream-otsikko
#define MAX 10 // M��ritell��n esik��nt�j�lle vakio

using namespace std; // Valitaan k�ytt��n std-nimiavaruus

int summa; // Alustetaan muuttuja
void Laske(int, int); // M��ritell��n funktio Laske

void main(void) // Ohjelman suoritus alkaa
{
     const int max = 20; // M��ritell��n k��nt�j�lle vakio
     int luku1 = 2, luku2; // Alustetaan muuttuja

     cout << "Sy\x94t\x84 luku: "; // Tulostetaan ruudulle
     cin >> luku2; // Luetaan k�ytt�j�n sy�te muuttujaan
     Laske(luku1, luku2); // Kutsutaan funktiota
     if (summa < MAX) // Vertaillaan arvoja
        cout << "Summa on pienempi kuin " << MAX; // Tulostetaan ruudulle
     if (summa < max) // Vertaillaan arvoja
        cout << "Summa on pienempi kuin " << max; // Tulostetaan ruudulle

} // Main p��ttyy

void Laske(int eka, int toka) // M��ritell��n funktio Laske ja sen parametrien tyypeiksi kokonaisluku
{
     summa = eka + toka; // Suoritetaan laskuoperaatio ja sijoitetaan tiedot muuttujaan
}
