#include <stdio.h>

//Aþþaðýda 3 Elemanlý Bir Struct Veri Dizisi Tanýmlanmýþtýr.Yapýlmasý Gereken Tek Þey Biten Parantezdeki Kullanýlacak Kýsaltmanýn Ýçine 
// Köþeli Parantez Ýle Deðererini Yazmaktýr.
	int s;
	
struct Ogrenci
{
	char Ad[30];
	char Soyad[30];
	int No;
	int Sinif;
}ogr[3]={

{"Serkan","Polat",529,1},	//Her Bir Parantez Dizinin Deðerini Verir.Ýlk Parantez Dizinin 0.Ýndexsine Atama Yapar.
{"Feto","Picakci",22,2},	//1.Ýndexse Deðer Atamasý
{"Kafir","Bayrak",503,3},	//2.Ýndexe Deðer Atamasý
//Aralar Virgülle Ayrýlýr En Sonda Köþeli Paranteze ; Konularak Deðer Atama Ýþlemi Bitirilir.
};

int main()
{
	//Sýralama
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
