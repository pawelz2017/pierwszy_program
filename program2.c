#include <stdio.h>

int mnoz(int a, int b){
	return a * b;
}

int dodaj(int a, int b){
	return a + b;
}

int main()
{
	int a = 2, b = 5; /*deklaracja wraz z inicjalizacja */

	char wybor;
	printf("Podaj symbol dzialania matematycznego (+/*)\n");
	scanf("%c", &wybor);	/*Odczytaj z konsoli i zapisz pod wybor*/

	if(wybor == '*'){
		printf("Wynik mnozenia: %i\n", mnoz(a,b));
	}else{
		printf("Wynik dodawania: %i\n", dodaj(a,b));
	}



	return 0;
}
