#include <stdio.h>
#include <string.h>

//	strcmp Komutu Karþýlaþtýrma Komutudur.Karakter Dizilerini Karþýlaþtýrýr.
//	strcmp(karakterDizini1,KarakterDizini2);
//  strcmp Eðerki Karþýlaþtýrma Sonucu 0 Deðeri Döndürüyorsa Karakter Dizileri Aynýdýr.
//	strcmp Karþýlaþtýrma Sonucu 0'dan Küçük Bir Deðer Döndürüyotsa 1.Dizin 2.Dizinden Alfabetik Olarak Önce Geliyor Demektir.
//	strcmp 0'dan Büyük Deðer Döndürüyorsa 2.Dizin 1.Dizinden Alfabetik Olarak Önce Geliyor Demektir.
int main()
{
	char karakter1[]="yhmet",karakter2[]="mehmet";
	printf("%d",strcmp(karakter1,karakter2));
	//Ahmet Önce Geleceðinden -1 Deðeri Döner.
	
}
