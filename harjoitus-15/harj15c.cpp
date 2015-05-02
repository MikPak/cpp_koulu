/*
*	Ty�n nimi: Harjoitus 15c
*	Tekij�: Mikko Pakkanen
*	Kuvaus teht�v�st�:


T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon (ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)

b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")

c) merkkijono voi olla kuinka pitk�
tahansa (max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

P�iv�m��r�: 15.10.2014
Versio: 1.0
*
*
*
*/

#include <iostream>

using namespace std;

void main() {
	char merkkijono1[100], merkkijono2[100] = {};
	int mjpituus, testi=1;

	cout << "Anna merkkijono (max 100): ";
	cin.getline(merkkijono1, 100);

	for (int i = 0, j = 0; merkkijono1[i] != '\0'; i++, j++) // Poistetaan whitespacet k�ytt�j�n sy�tteest� ja tallennetaan se taulukkoon merkkijono2
	{
		if (merkkijono1[i] != ' ')
		{
			merkkijono2[j] = tolower(merkkijono1[i]);
		}
		else
		{
			j--;
		}
		mjpituus = j;
	}

	for (int i = 0; i < (mjpituus / 2); i++) // Lopetetaan testi jos merkkijono2 alkiot eiv�t ole samat
	{
		if (testi == 1)
		{
			if (merkkijono2[i] != merkkijono2[mjpituus - i])
			{
				testi = 0;

				reverse(merkkijono2, merkkijono2 + mjpituus + 1);
				cout << "Ei palindromi!" << endl;
				cout << merkkijono1 << " <-> " << merkkijono2 << endl;
			}
		}
		else
		{
			break;
		}
	}

	if (testi == 1)
	{ 
		reverse(merkkijono2, merkkijono2 + mjpituus + 1);
		cout << "Palindromi!" << endl;
		cout << merkkijono1 << " <-> " << merkkijono2 << endl;

	}
}