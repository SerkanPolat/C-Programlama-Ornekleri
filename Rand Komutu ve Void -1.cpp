#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Void geriye de�er d�nd�rmez i�inde kullan�lacak de�i�ken global olarak tan�mlaranacak fonksiyon de�er d�nd�rmedi�i halde i�inde i�lem yap�p de�i�kene aktar�l�p kullan�labilir
//Void fonksiyonu alt programd�r Ana main fonksiyonunda dallanmay� sa�lar.

//random say� �retmek i�in kullan�lan komut rand()%Son De�er �rn: rand()%40; rand 1 den ba�lar 40'a kadar bir de�er �retir. Kullan�lan K�t�phane <stdlib.h>
//D�KKAT : rand Komutu Bir Kereye Mahsus Olarak Random Olarak De�er D�nd�r�r Falan Sonras�na Zamana Ba�lI Olarak De�er De�i�tirmez Bunun ��in.
// <time.h> K�t�phanesini A��p srand(time(NULL)); Komutu Kullan�larak Rand Komutunun Zaman� S�f�rlan�r ve Tekrardan De�er �retmesi Bu Komutla Sa�lan�r.


int zar;
void mesaj()
{
	srand(time(NULL));
	 zar = rand()%20;
	printf("Merhaba D�nya %d",zar);
	
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

