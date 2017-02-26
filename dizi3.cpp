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
	int toplam=0;
	for(int j=0;j<sayi;j++)
	{
//		printf("%d\n",notlar[j]);
//		printf("%d\n",toplam);
		toplam+=notlar[j];
	}
	printf("\nSinif Ortalamasi : %d",(toplam/sayi));
	
	
}
