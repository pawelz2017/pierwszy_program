#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a * b);
}

double dziel (int a, int b){
	printf("Wynik dzielenia: %i i reszta: %i\n", a / b, a % b);
}

int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a + b);
}

int odejmowanie(int a, int b){
	printf("Wynik odejmowania: %i\n", a - b);
}

int licz(int a, int b, char wybor){
	if(wybor == '+') dodaj(a,b);
	else	if(wybor == '-') odejmowanie(a,b);
	else	if(wybor == '*') mnoz(a,b);
	else	if(wybor == '/') dziel(a,b);
	else	printf("Dzialanie nie obslugiwane\n");
	return 1;
}

int main()
{

	int a;
	int b;
	char wybor;
	int czy_dalej = 1;

	while(czy_dalej == 1){


/*
		printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
		scanf("%c", &wybor);	/*Odczytaj z konsoli i zapisz pod wybor*/


		printf("Podaj pierwsza liczbe\n");
		scanf("%i", &a);	/*Odczytaj z konsoli i zapisz pod wybor*/

		printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
		scanf(" %c", &wybor);	/*Odczytaj z konsoli i zapisz pod wybor*/

		printf("Podaj druga liczbe\n");
		scanf("%i", &b);	/*Odczytaj z konsoli i zapisz pod wybor*/
		
		licz(a, b, wybor);
	
/*	
		printf("debug %i\n", a);
		printf("debug %i\n", b);
		printf("debug %c\n", wybor);
*/

		printf("Czy chcesz dalej liczyc? (1 - tak / 0 - nie: ");
		scanf("%i", &czy_dalej);
	}

	return 0;
}
