#include <stdio.h>

//return �nt �le Tan�mlanm�� Fonksiyonun Geriye De�er D�nd�rmesini Sa�lar.

//Void Fonksiyon Sadece Bir Fonksiyon Olarak Davran�rken Herhangi Bir De�i�kene G�re Tan�mlanm�� Fonksiyon Hem Fonksiyon G�revi --
//Hemde Bir De�i�ken G�revi G�rerek Esneklik Sa�lar.

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
	printf("2 De�er Giriniz : "); scanf("%d",&say1);
	scanf("%d",&say2);
	
	printf("%d  %d  \nCarpimlar� : %d",say1,say2,carp(say1,say2));
	printf("\n%d %d Toplamlarin Kareleri : %d ",say1,say2,kareal(say1,say2));
	printf("\n\n Global Argumansiz Carpim : %d",deneme());
	printf("\n\n Ussunu Al : %d",usal(say1,say2));
	getchar();
}
