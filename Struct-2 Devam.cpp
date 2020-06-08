#include <stdio.h>

//Aşşağıda 3 Elemanlı Bir Struct Veri Dizisi Tanımlanmıştır.Yapılması Gereken Tek Şey Biten Parantezdeki Kullanılacak Kısaltmanın İçine 
// Köşeli Parantez İle Değererini Yazmaktır.
	int s;
	
struct Ogrenci
{
	char Ad[30];
	char Soyad[30];
	int No;
	int Sinif;
}ogr[3]={

{"Serkan","Polat",529,1},	//Her Bir Parantez Dizinin Değerini Verir.İlk Parantez Dizinin 0.İndexsine Atama Yapar.
{"Beyto","Picakci",22,2},	//1.İndexse Değer Ataması
{"Baris","Bayrak",503,3},	//2.İndexe Değer Ataması
//Aralar Virgülle Ayrılır En Sonda Köşeli Paranteze ; Konularak Değer Atama İşlemi Bitirilir.
};

int main()
{
	//Sıralama
	for(int i=0;i<3;i++)
	{
		printf("%s\t%s\t%d\t%d\n",ogr[i].Ad,ogr[i].Soyad,ogr[i].No,ogr[i].Sinif);
	}
	//Atama Tekrar Listeleme
	scanf("%d",&ogr[2].No);
		for(int i=0;i<3;i++)
	{
		printf("%s\t%s\t%d\t%d\n",ogr[i].Ad,ogr[i].Soyad,ogr[i].No,ogr[i].Sinif);
	}
}
