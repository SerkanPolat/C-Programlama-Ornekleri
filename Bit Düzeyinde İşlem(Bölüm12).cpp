#include <stdio.h>

struct paket{
 int s1:1;		//int olarak 1 bitlik yer ayrıldı.
 				//Adres BloğunuN 1 Biti s1 e 1 Biti s2 ye 1 Biti s3 e Ayrıldı.Ayırma İşlemi Soldan Sağa Yapılıyor.
 				//Geriye Kalana Bitler Kullanılmıyor Adres Blokları 8 Bittir.Burada 3 Bit Ayırdık
 int s2:1;
 int s3:1;
}pakett;

int main()
{
	pakett.s3=1;
	pakett.s1=1;
	pakett.s2=1;
	printf("%d",pakett);
	//Yukarıda Çıkan Sonuç Ayrırılan Bitlere Değerler Atanır ve Pakett'in Adres Bloğu 00000111 Şeklindedir ve Bunun 2 Lik Tabandan 10 luk Tabana Hesaplaması 7 Olarak Bulunur.
	
}
