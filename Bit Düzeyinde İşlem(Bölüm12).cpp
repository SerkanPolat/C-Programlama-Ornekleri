#include <stdio.h>

struct paket{
 int s1:1;		//int olarak 1 bitlik yer ayr�ld�.
 				//Adres Blo�unuN 1 Biti s1 e 1 Biti s2 ye 1 Biti s3 e Ayr�ld�.Ay�rma ��lemi Soldan Sa�a Yap�l�yor.
 				//Geriye Kalana Bitler Kullan�lm�yor Adres Bloklar� 8 Bittir.Burada 3 Bit Ay�rd�k
 int s2:1;
 int s3:1;
}pakett;

int main()
{
	pakett.s3=1;
	pakett.s1=1;
	pakett.s2=1;
	printf("%d",pakett);
	//Yukar�da ��kan Sonu� Ayr�r�lan Bitlere De�erler Atan�r ve Pakett'in Adres Blo�u 00000111 �eklindedir ve Bunun 2 Lik Tabandan 10 luk Tabana Hesaplamas� 7 Olarak Bulunur.
	
}
