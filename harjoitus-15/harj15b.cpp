/*
*	Ty�n nimi: Harjoitus 15b
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
	char merkkijono1[19], merkkijono2[19];

	cout << "Anna merkkijono: " << endl;
	cin.getline(merkkijono1, 18);

	strcpy_s(merkkijono2, sizeof(merkkijono2), merkkijono1); // Kopioidaan merkkijono1 taulukkoon merkkijono2
	cout << merkkijono2 << endl;
}