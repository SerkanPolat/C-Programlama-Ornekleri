#include <stdio.h>
#include <string.h>
struct kisi{
	char Ad[20];
	char Soyad[20]; 
};
/*
int main()
{

	int sayi;
	printf("Struct Dizi Sayisi Giriniz : ");
	scanf("%d",&sayi);
	//Struct Dizinin Eleman Sayýsý Main Ýçerisinde Program Gidiþatýna Görede Belirlenebilir.
	struct kisi k[sayi];
	for(int i=0;i<sayi;i++)
	{
		scanf("%s",&k[i].Ad);
		scanf("%s",&k[i].Soyad);
	}
	for(int i=0;i<sayi;i++)
	{
		printf("%s\t%s\n",k[i].Ad,k[i].Soyad);
	}
}
*/
struct futbolcu{
	char Ad[20];
	char Takim[50];
	int Yas;
};

int main()
{
	struct futbolcu f[2];
	strcpy(f[0].Ad,"Arif Erdem");
	strcpy(f[0].Takim,"Galatasaray");
	f[0].Yas=40;
	strcpy(f[1].Ad,"Arif Erdem");
	strcpy(f[1].Takim,"Galatasaray");
	f[1].Yas=40;
	printf(" Ad : %s \n Takim : %s \n Yas : %d",f[0].Ad,f[0].Takim,f[0].Yas);
	//Struct Veri Dizisi Pointere Atanýr.
	struct futbolcu *Fptr=&f[1];
	//Pointer Ýle Veriyi Okumak
	printf("\n\n Ad : %x \n Takim : %x \n Yas : %x",Fptr->Ad,Fptr->Takim,&Fptr->Yas);
	struct futbolcu *Fptr2=&f[2];
	printf("\n\n Ad : %s \n Takim : %x \n Yas : %x",Fptr2->Ad,Fptr2->Takim,&Fptr2->Yas);
}

