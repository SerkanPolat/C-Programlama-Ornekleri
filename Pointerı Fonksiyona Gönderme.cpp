#include <stdio.h>

//Fonksiyona & Ýle Gönderilen Adres Fonksiyona Gelir.Gelen Adres Buradaki * Gördüðü Anda O Adresteki Deðer Alýnýr.


void mesaj(int *x)
{
	for(int i=1;i<=*x;i++)
	{
		printf("Merhaba Dünya %d\n",i);
	}
}

int main()
{
	int deger;
	scanf("%d",&deger);
	mesaj(&deger);
}




//Dizinin Herhangi Bir Adresini Alýp Scanf'le Deðerini Deðiþtirme
