#include <stdio.h>



int main()
{
	//Ýlk Önce Dizi Eleman Sayýsý Giriliyor.
	int eleman,sira;
	printf("Dizi Eleman Sayisi Giriniz : ");
	scanf("%d",&eleman);
	int dizi[eleman];
	//Ýleride Gerekli Müdahale Yapýlabilmesi Ýçin Dizi Pointere Tanýmlanýyor
	int *ptr=dizi;
	//Dizi Eleman Sayisina Göre Dizinin Ýçi Dolduruluyor.
	for(int i=0;i<eleman;i++)
	{
		printf("\n %d.Elemani Giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	//Dizinin Belirli Ýndexsindeki Deðeri Deðiþtirmek Ýçin Ýndex Ýsteniyor.
	printf("\n\n Deðiþtirmek Ýstediðiniz Sayýnýn Sýrasýný Giriniz : ");
	scanf("%d",&sira);
	//Yeni Deðer Ýsteniyor.
	printf("\n Yeni Deðeri Giriniz : ");
	//****Dizinin Deðiþtirmesi Ýstenilen Sýrasýna Daha Önceden Diziyi Tanýmlamýþ
	//Olduðumuz Pointer Kullanýlarak Adresine Müdahale Edilerek Yeni Deðer Atanýyor.
	//Kýsacasý Diziler Sýralý Olduðundan Pointer Ýle Adres Bulunuyor Adresteki Deðer Deðiþtiriliyor.
	scanf("%d",ptr+(sira-1));
	for(int i=0;i<eleman;i++)
	{
		printf("\n\t%d",dizi[i]);
	}
}
