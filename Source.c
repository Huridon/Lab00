#include <locale.h>

#include <stdio.h>

#include <stdlib.h> 

void name();
void date();

void main()

{

	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки

	name();
	
	date();


	return 5555;

}

void name()

{

	puts("*****************************************"); // вывод строки
	puts("*                                       *");
	puts("*тема: Разработка консольного приложения*");
	puts("*    Выполнил Измалков И.А              *");
	puts("*                                       *");
	puts("*****************************************");

	getchar(); // задержка экрана

}

void date()

{
	puts(" _  _   _  _   _  _");
	puts("| |  | | ||   | || |");
	puts("    _      _      _");
	puts("| |  | | |  | | || |");
	puts(" _  _ . _  _ . _  _");

	getchar(); // задержка экрана
}