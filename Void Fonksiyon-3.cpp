#include <stdio.h>

//Void Fonksiyonlar Geriye Deðer Döndürmeyen Fonksiyonlardýr.
//Parametre Gönderirken Fonksiyon Yazýmýnda fonksiyon(parametre1,parametre2);
//Sýrasýyla Parametre Gönderilir ve Fonksiyonda Tanýmlanan Deðiþkene Gönderilir.
//Aþþaðýdaki Fonksiyonda Main Fonksiyonun Ýçindeki s Deðeri Alt Fonsiyon olan --
//Kontrolet Fonksiyonunda sayi Deðiþkeni Olarak Kullanýlmýþtýr.

//Ýstenilirse Tek Global Deðiþken Tanýmlanýpta Ýþlemler O Deðiþken Üstünden Yönetilebilir.
int kontrolet(int sayi)
{
	if(sayi%2==0)
	{
		printf("Sayi Cifttir.");
	}else
	{
		printf("Sayi Tektir.");
	}
}

int main()
{
	int s;
	printf("Sayi Giriniz : ");
	scanf("%d",&s);
	kontrolet(s);
}
