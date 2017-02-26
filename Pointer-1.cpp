#include <stdio.h>
//Pointerlar ��aret�idirler Ramdeki Adresleri Saklamada ve G�stermede Kullan�l�rlar.
//Kullan�m� De�i�kentipi *[PointerAd�];  De�i�ken Ad�n�n �n�ne Gelen Y�ld�z Onun Bir Pointer Yapar.
// int *pointer; �eklinde Kullan�l�r.Pointerler bir �nt ��ine De�i�kenler Ba�ka �nt ��ine Yaz�l�r.Ayn� �nt ��ine Hem Pointer Hemde De�i�ken Yaz�lmaz.
//Printf de Yaz�l�mlar�nda printf("%p",*pointer); �eklinde Olursa Pointer Adresinin ��indeki De�i�ken G�sterilir.
//Y�ld�z Kald�r�l�rsa Direk Pointerin Adresine Eri�ilir. Bu Durum printf("%p",&De�i�ken); �le Ayn�d�r.
//Pointerda Y�ld�z Adres ��indeki Veri Anlam�na Gelir.

int main()
{
	//�rnek 1
	int *p1,dizi[100];
	dizi[99]=10;
	for(int i=0;i<100;i++)
	{
			p1=&dizi[i];
	}
		//�rnek 2
//Her Pointer�n De�i�keni Farkl�d�r De�i�kene �zel Pointer Tan�mlan�r.
	
	printf("%x\n",p1);
	int sayi=6;
	char karakter = 'A';
	float ondalik=10.3;
	
	//Pointerlar Ba�ka �nte De�i�kenler Ba�ka �nt Alt�nda Toplan�r.
	
	int *p_sayi;
	char *p_karakter;
	float *p_ondalik;
	
	p_sayi = &sayi;
	p_karakter = &karakter;
	p_ondalik = &ondalik;
	printf("%d Sayisinin Adresi %x\n",sayi,p_sayi);
	printf("%c Harfinin Adresi %x\n",karakter,p_karakter);
	printf("%.1f Ondaliligin Adresi %x\n",ondalik,p_ondalik);
	
	//�rnek 3
	//Pointer Kullan�larak Bir De�i�kenin Adresi Pointere At�l�p Pointerdende Ba�ka Bir De�i�kene O Adresteki De�er At�labilir.
	//Bu Durum sayi2=sayi3; Komutuyla Ayn�d�r.
		
	int *pointer;
	int sayi2,sayi3;
	printf("\n\n\n");
	scanf("%d",&sayi2);
	pointer=&sayi2;
	sayi3=*pointer;
	printf("\n\n\n %d Pointerden Gelen Deger",sayi3);
	
}
