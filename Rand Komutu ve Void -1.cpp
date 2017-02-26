#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Void geriye deðer döndürmez içinde kullanýlacak deðiþken global olarak tanýmlaranacak fonksiyon deðer döndürmediði halde içinde iþlem yapýp deðiþkene aktarýlýp kullanýlabilir
//Void fonksiyonu alt programdýr Ana main fonksiyonunda dallanmayý saðlar.

//random sayý Üretmek için kullanýlan komut rand()%Son Deðer Örn: rand()%40; rand 1 den baþlar 40'a kadar bir deðer üretir. Kullanýlan Kütüphane <stdlib.h>
//DÝKKAT : rand Komutu Bir Kereye Mahsus Olarak Random Olarak Deðer Döndürür Falan Sonrasýna Zamana BaðlI Olarak Deðer Deðiþtirmez Bunun Ýçin.
// <time.h> Kütüphanesini Açýp srand(time(NULL)); Komutu Kullanýlarak Rand Komutunun Zamaný Sýfýrlanýr ve Tekrardan Deðer Üretmesi Bu Komutla Saðlanýr.


int zar;
void mesaj()
{
	srand(time(NULL));
	 zar = rand()%20;
	printf("Merhaba Dünya %d",zar);
	
}
int main()
{
	mesaj();
	if(zar%2==0)
	{
		printf("\nSayi Cifttir.");
	}
	else
	{
		printf("\nTek Sayidir.");
	}
}

