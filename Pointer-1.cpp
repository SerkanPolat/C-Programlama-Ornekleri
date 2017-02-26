#include <stdio.h>
//Pointerlar Ýþaretçidirler Ramdeki Adresleri Saklamada ve Göstermede Kullanýlýrlar.
//Kullanýmý Deðiþkentipi *[PointerAdý];  Deðiþken Adýnýn Önüne Gelen Yýldýz Onun Bir Pointer Yapar.
// int *pointer; Þeklinde Kullanýlýr.Pointerler bir Ýnt Ýçine Deðiþkenler Baþka Ýnt Ýçine Yazýlýr.Ayný Ýnt Ýçine Hem Pointer Hemde Deðiþken Yazýlmaz.
//Printf de Yazýlýmlarýnda printf("%p",*pointer); Þeklinde Olursa Pointer Adresinin Ýçindeki Deðiþken Gösterilir.
//Yýldýz Kaldýrýlýrsa Direk Pointerin Adresine Eriþilir. Bu Durum printf("%p",&Deðiþken); Ýle Aynýdýr.
//Pointerda Yýldýz Adres Ýçindeki Veri Anlamýna Gelir.

int main()
{
	//Örnek 1
	int *p1,dizi[100];
	dizi[99]=10;
	for(int i=0;i<100;i++)
	{
			p1=&dizi[i];
	}
		//Örnek 2
//Her Pointerýn Deðiþkeni Farklýdýr Deðiþkene Özel Pointer Tanýmlanýr.
	
	printf("%x\n",p1);
	int sayi=6;
	char karakter = 'A';
	float ondalik=10.3;
	
	//Pointerlar Baþka Ýnte Deðiþkenler Baþka Ýnt Altýnda Toplanýr.
	
	int *p_sayi;
	char *p_karakter;
	float *p_ondalik;
	
	p_sayi = &sayi;
	p_karakter = &karakter;
	p_ondalik = &ondalik;
	printf("%d Sayisinin Adresi %x\n",sayi,p_sayi);
	printf("%c Harfinin Adresi %x\n",karakter,p_karakter);
	printf("%.1f Ondaliligin Adresi %x\n",ondalik,p_ondalik);
	
	//Örnek 3
	//Pointer Kullanýlarak Bir Deðiþkenin Adresi Pointere Atýlýp Pointerdende Baþka Bir Deðiþkene O Adresteki Deðer Atýlabilir.
	//Bu Durum sayi2=sayi3; Komutuyla Aynýdýr.
		
	int *pointer;
	int sayi2,sayi3;
	printf("\n\n\n");
	scanf("%d",&sayi2);
	pointer=&sayi2;
	sayi3=*pointer;
	printf("\n\n\n %d Pointerden Gelen Deger",sayi3);
	
}
