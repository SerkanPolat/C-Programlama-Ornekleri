#include <stdio.h>
#include <string.h>

//	strcmp Komutu Kar��la�t�rma Komutudur.Karakter Dizilerini Kar��la�t�r�r.
//	strcmp(karakterDizini1,KarakterDizini2);
//  strcmp E�erki Kar��la�t�rma Sonucu 0 De�eri D�nd�r�yorsa Karakter Dizileri Ayn�d�r.
//	strcmp Kar��la�t�rma Sonucu 0'dan K���k Bir De�er D�nd�r�yotsa 1.Dizin 2.Dizinden Alfabetik Olarak �nce Geliyor Demektir.
//	strcmp 0'dan B�y�k De�er D�nd�r�yorsa 2.Dizin 1.Dizinden Alfabetik Olarak �nce Geliyor Demektir.
int main()
{
	char karakter1[]="yhmet",karakter2[]="mehmet";
	printf("%d",strcmp(karakter1,karakter2));
	//Ahmet �nce Gelece�inden -1 De�eri D�ner.
	
}
