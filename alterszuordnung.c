#include<stdio.h>

int main () {

	/*
	Dieses Programm soll das Alter eines Menschen einlesen und dann
	ausgeben, zu welcher Altersklasse dieser Mensch gehört.
	Unterteilt wird in Kind/Jugendlicher, Erwachsener & Rentner
	*/

	printf("\n ****************************************** ");
	printf("\n *   ^,,,,^   *                           * ");
	printf("\n *  ( o x o)  *  Altersklassen-Zuordnung  * ");
	printf("\n *  ( 7   7)  *                           * ");
	printf("\n *   ´´´´´´   *                   ©S.Buch * ");
	printf("\n ****************************************** \n\n");
	
	//Einlesen des Alters
	int alter;
	printf("Bitte geben Sie Ihr Alter an (in Jahren): ");
	scanf("%d",&alter);

	//Zuordnung der Altersklasse
	if (0<alter&&alter<=17) {
		printf("\nAha, du bist also ein Kind oder Jungendlicher.\n");
	} else if (alter<67){
		printf("\nLaut Ihres Alters sind Sie ein Erwachsender.\n");
	} else if (alter>=67) {
		printf("\nLaut Ihres Alters sind Sie ein Rentner.\n");
	} else {
		printf("\nSie haben kein gültiges Alter angegeben.\n");
	}

	//Ende
	return 0;
}
