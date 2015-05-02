#include <iostream> // Sisällytetään iostream-otsikko
#define MAX 10 // Määritellään esikääntäjälle vakio

using namespace std; // Valitaan käyttöön std-nimiavaruus

int summa; // Alustetaan muuttuja
void Laske(int, int); // Määritellään funktio Laske

void main(void) // Ohjelman suoritus alkaa
{
     const int max = 20; // Määritellään kääntäjälle vakio
     int luku1 = 2, luku2; // Alustetaan muuttuja

     cout << "Sy\x94t\x84 luku: "; // Tulostetaan ruudulle
     cin >> luku2; // Luetaan käyttäjän syöte muuttujaan
     Laske(luku1, luku2); // Kutsutaan funktiota
     if (summa < MAX) // Vertaillaan arvoja
        cout << "Summa on pienempi kuin " << MAX; // Tulostetaan ruudulle
     if (summa < max) // Vertaillaan arvoja
        cout << "Summa on pienempi kuin " << max; // Tulostetaan ruudulle

} // Main päättyy

void Laske(int eka, int toka) // Määritellään funktio Laske ja sen parametrien tyypeiksi kokonaisluku
{
     summa = eka + toka; // Suoritetaan laskuoperaatio ja sijoitetaan tiedot muuttujaan
}
