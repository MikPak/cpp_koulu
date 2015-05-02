/*
*	Työn nimi: Harjoitus 15b
*	Tekijä: Mikko Pakkanen
*	Kuvaus tehtävästä:


TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

Päivämäärä: 15.10.2014
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