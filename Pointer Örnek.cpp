#include <stdio.h>



int main()
{
	//�lk �nce Dizi Eleman Say�s� Giriliyor.
	int eleman,sira;
	printf("Dizi Eleman Sayisi Giriniz : ");
	scanf("%d",&eleman);
	int dizi[eleman];
	//�leride Gerekli M�dahale Yap�labilmesi ��in Dizi Pointere Tan�mlan�yor
	int *ptr=dizi;
	//Dizi Eleman Sayisina G�re Dizinin ��i Dolduruluyor.
	for(int i=0;i<eleman;i++)
	{
		printf("\n %d.Elemani Giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	//Dizinin Belirli �ndexsindeki De�eri De�i�tirmek ��in �ndex �steniyor.
	printf("\n\n De�i�tirmek �stedi�iniz Say�n�n S�ras�n� Giriniz : ");
	scanf("%d",&sira);
	//Yeni De�er �steniyor.
	printf("\n Yeni De�eri Giriniz : ");
	//****Dizinin De�i�tirmesi �stenilen S�ras�na Daha �nceden Diziyi Tan�mlam��
	//Oldu�umuz Pointer Kullan�larak Adresine M�dahale Edilerek Yeni De�er Atan�yor.
	//K�sacas� Diziler S�ral� Oldu�undan Pointer �le Adres Bulunuyor Adresteki De�er De�i�tiriliyor.
	scanf("%d",ptr+(sira-1));
	for(int i=0;i<eleman;i++)
	{
		printf("\n\t%d",dizi[i]);
	}
}
