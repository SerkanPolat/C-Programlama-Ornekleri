#include <stdio.h>

//A��a��da 3 Elemanl� Bir Struct Veri Dizisi Tan�mlanm��t�r.Yap�lmas� Gereken Tek �ey Biten Parantezdeki Kullan�lacak K�saltman�n ��ine 
// K��eli Parantez �le De�ererini Yazmakt�r.
	int s;
	
struct Ogrenci
{
	char Ad[30];
	char Soyad[30];
	int No;
	int Sinif;
}ogr[3]={

{"Serkan","Polat",529,1},	//Her Bir Parantez Dizinin De�erini Verir.�lk Parantez Dizinin 0.�ndexsine Atama Yapar.
{"Feto","Picakci",22,2},	//1.�ndexse De�er Atamas�
{"Kafir","Bayrak",503,3},	//2.�ndexe De�er Atamas�
//Aralar Virg�lle Ayr�l�r En Sonda K��eli Paranteze ; Konularak De�er Atama ��lemi Bitirilir.
};

int main()
{
	//S�ralama
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
