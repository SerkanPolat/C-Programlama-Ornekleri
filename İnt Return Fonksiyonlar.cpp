#include <stdio.h>

//return Ýnt Ýle Tanýmlanmýþ Fonksiyonun Geriye Deðer Döndürmesini Saðlar.

//Void Fonksiyon Sadece Bir Fonksiyon Olarak Davranýrken Herhangi Bir Deðiþkene Göre Tanýmlanmýþ Fonksiyon Hem Fonksiyon Görevi --
//Hemde Bir Deðiþken Görevi Görerek Esneklik Saðlar.

int s1=5,s2=10;
int carp(int x,int y)
{
	return x*y;
}
int topla(int z,int t)
{
	return z+t;
}
int kareal(int kar1, int kar2)
{
//	int sonuc = topla(kar1,kar2);
//	return carp(sonuc,sonuc);
	return carp(topla(kar1,kar2),topla(kar1,kar2));
}
int deneme()
{
	return s1*s2;
}
int usal( int taban,int us)
{
	int sonuc=1;
	for(int i=0;i<us;i++)
	sonuc = sonuc*taban;
	return sonuc;
}
int main()
{
	int say1,say2;
	printf("2 Deðer Giriniz : "); scanf("%d",&say1);
	scanf("%d",&say2);
	
	printf("%d  %d  \nCarpimlarý : %d",say1,say2,carp(say1,say2));
	printf("\n%d %d Toplamlarin Kareleri : %d ",say1,say2,kareal(say1,say2));
	printf("\n\n Global Argumansiz Carpim : %d",deneme());
	printf("\n\n Ussunu Al : %d",usal(say1,say2));
	getchar();
}
