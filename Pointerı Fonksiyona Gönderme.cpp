#include <stdio.h>

//Fonksiyona & �le G�nderilen Adres Fonksiyona Gelir.Gelen Adres Buradaki * G�rd��� Anda O Adresteki De�er Al�n�r.


void mesaj(int *x)
{
	for(int i=1;i<=*x;i++)
	{
		printf("Merhaba D�nya %d\n",i);
	}
}

int main()
{
	int deger;
	scanf("%d",&deger);
	mesaj(&deger);
}




//Dizinin Herhangi Bir Adresini Al�p Scanf'le De�erini De�i�tirme
