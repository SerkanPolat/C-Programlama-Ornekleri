#include <stdio.h>

//Void Fonksiyonlar Geriye De�er D�nd�rmeyen Fonksiyonlard�r.
//Parametre G�nderirken Fonksiyon Yaz�m�nda fonksiyon(parametre1,parametre2);
//S�ras�yla Parametre G�nderilir ve Fonksiyonda Tan�mlanan De�i�kene G�nderilir.
//A��a��daki Fonksiyonda Main Fonksiyonun ��indeki s De�eri Alt Fonsiyon olan --
//Kontrolet Fonksiyonunda sayi De�i�keni Olarak Kullan�lm��t�r.

//�stenilirse Tek Global De�i�ken Tan�mlan�pta ��lemler O De�i�ken �st�nden Y�netilebilir.
int kontrolet(int sayi)
{
	if(sayi%2==0)
	{
		printf("Sayi Cifttir.");
	}else
	{
		printf("Sayi Tektir.");
	}
}

int main()
{
	int s;
	printf("Sayi Giriniz : ");
	scanf("%d",&s);
	kontrolet(s);
}
