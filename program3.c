#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a * b);
}

double dziel (int a, int b){
	printf("Wynik dzielenia: %i\n", a / b);
}

int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a + b);
}

int odejmowanie(int a, int b){
	printf("Wynik odejmowania: %i\n", a - b);
}

int main()
{
//	int a = 2, b = 5; /*deklaracja wraz z inicjalizacja */
	int a;
	int b;
	char wybor;

	printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
	scanf("%s", &wybor);	/*Odczytaj z konsoli i zapisz pod wybor*/


	printf("Podaj pierwsza liczbe\n");
	scanf("%i", &a);	/*Odczytaj z konsoli i zapisz pod wybor*/

	printf("Podaj druga liczbe\n");
	scanf("%i", &b);	/*Odczytaj z konsoli i zapisz pod wybor*/

	
//	printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
//	scanf("%s", &wybor);	/*Odczytaj z konsoli i zapisz pod wybor*/
	
	

	if(wybor == '+') dodaj(a, b);
	else	if(wybor == '-') odejmowanie(a, b);
	else	if(wybor == '*') mnoz(a, b);
	else	if(wybor == '/') dziel(a, b);
	else	printf("Dzialanie nie obslugiwane\n");

/*
	if(wybor == '*'){
		printf("Wynik mnozenia: %i\n", mnoz(a,b));
	}else{
		printf("Wynik dodawania: %i\n", dodaj(a,b));
	}

*/

	return 0;
}
