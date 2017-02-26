#include <stdio.h>

int main()
{
	int sayi=0;
	printf("Ogrenci Sayisi Giriniz : "); scanf("%d",&sayi);
	int notlar[sayi];
	for(int i=0;i<sayi;i++)
	{
		printf("\n%d.Ogrencinin Notu",(i+1)); scanf("%d",&notlar[i]);
	}
	int sayac=0;
	for(int j=0;j<sayi;j++)
	{
		if(notlar[j]>=90)
		{
			sayac++;
			
		}
	}
		printf("AA Notu Gecen Kisi Sayisi : %d",sayac);
}

