/*
*	Tyˆn nimi: Harjoitus 19 (Palautus vko 47)
*	Tekij‰: Mikko Pakkanen
*	Kuvaus teht‰v‰st‰:

Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava: N‰pp‰imist‰ toimii
nopeusanturina ja n‰ytt‰ mittarin n‰ytt‰n‰.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisen‰ nopeutena
n‰yt‰lle. Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava:
Ohjelman kaynnistyksessa mittari n‰ytt‰‰ nolla
0
0
0
0
0 (alkutila) nopeus = 0 km/h
Anna nopeus: 10 => 2 km/h
Anna nopeus: 20 => 6 km/h
Anna nopeus: 30 => 12 km/h
Anna nopeus: 40 => 20 km/h
Anna nopeus: 50 => 30 km/h
Anna nopeus: 50 => 38 km/h
Anna nopeus: 50 => 44 km/h
Anna nopeus: 50 => 48 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: -5 => loppu

Toteuta kayttaen taulukkoa.

P‰iv‰m‰‰r‰: 18.10.2014
Versio: 1.0
*
*
*
*/
#include <iostream>

using namespace std;

float keskiarvo(float *nopeudet, int lkm)
{

	float arvot = 0;
	for (int i = 0; i < lkm; i++)
	{
		arvot += nopeudet[i];
		//cout << nopeudet[i] << endl;
	}
	
	arvot = (arvot / lkm);
	return arvot;
}

int main() {

	float nopeus = 0;
	float nopeudet[5] = { 0, 0, 0, 0, 0 };
	int lkm = sizeof(nopeudet) / sizeof(nopeudet[0]);

	while (nopeus >= 0)
	{
		for (int i = 0; i < lkm && nopeus >= 0; i++)
		{
			cout << keskiarvo(nopeudet, lkm) << " km/h";
			cout << " Anna nopeus: ";
			cin >> nopeudet[i];
			nopeus = nopeudet[i];
		}
	}
}