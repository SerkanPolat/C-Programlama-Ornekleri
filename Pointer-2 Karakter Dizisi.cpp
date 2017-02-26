#include <stdio.h>

//Pointerler Dizi Yönetiminde Kullanýlabilir.
//Diziler Bellekte Sýrayla Tutulduklarý Ýçin ptr=dizi; Ýle Dizinin Ýlk Elemaný Pointere Atýlýr ve Pointer Adresi 1 Arttýrýlarak Tüm Diziye Eriþilebilir.

int main()
{
/*	
	{ 
	
	int *ptr;
	int dizi[10];
	ptr=dizi;
	
	for(int i=0;i<10;i++)
	{
	printf("%p\t",(ptr+i));
	printf("%d\n",dizi[i]);
	}
}
*/	
	// Karakter Dizileri
	//Diðer Dizi Kullanýmýyla Aynýdýr Sadece Bitiþ Deðeri NULL Deðeri Yani Bos Deðerdir.
	//C Dili Büyük Küçük Harf Duyarlýdýr.
	
	int i=0;
	char metin[]="Merhaba Dünya";
//	for(int i=0;i<13;i++)
while(metin[i]!=NULL)
{
	printf("%c\n",i);
	i++;
}
	
}
