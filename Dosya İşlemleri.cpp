#include <stdio.h>

/*	Dosya ��lemleri Dosya Olu�turup Veri Yazma Okuma
Kullan�m : 

FILE *dosya;
dosya = fopen("Dosya Ad�","Mod");

	---��lemler---	

fclose(dosya);

----Modlar

r : Var olan Bir Dosyan�n Okunmas�n� Sa�lar.
w : Dosya Olu�turma veya Yazma Sa�lar.
a : Kay�tl� Dosyan�n Sonuna Veri Eklenmesini Sa�lar.
r+ : Okuma ve Yazma Dosyan�n Daha �nceden Olu�mu� Olmas� Gerekir.
w+ : Okuma ve Yazma ve Dosya Olu�turur.
a+ : Okuma ve Yazma Kay�tl� Dosyan�n Sonuna Veri Ekler.

---Dosya Fonksiyonlar�

fputs : Dosyaya Bir Karakter Veri Kaydeder.
fputs : Dosyaya Bir Karakter Dizisi Kaydeder.
fwrite : Dosyaya Bir Kay�t,Dizi veya Karakteri �kili Olarak Kaydeder.
fprintf : D�syaya Bi�imlendirilmi� veri Kaydeder.

fgetc : Dosyaya Bir Karakter Veri Okur.
fgets : Dosyaya Bir Karakter Dizisi Okur.
fread : Dosyaya Bir Kay�t,Dizi veya Karakteri �kili Olarak Okur.
fscanf  : Dosyaya Verileri Bi�imlendirerek Okur.

FEOF : Dosya Sonunun Belirlenmesi
Kullan�m
FILE *dosya;
while(!feof(dosya))
{
	fgetc(dosya);
]

*/
int main()
{
	/*
	FILE *dosya;
	dosya = fopen("deneme.txt","w+");
	//fclose(dosya);
//	char c[]="Serkan Polat";
//	dosya = fopen("Deneme.txt","w");
//	fprintf(dosya,"Merhaba %s",c);
//	fclose(dosya);
	for(int i = 1;i<=10;i++)
	{
		for(int j=0;j<10;j++)
		{
			fprintf(dosya,"%d x %d = %d\n",i,j,i*j);
			
		}
		fprintf(dosya,"\n");
	}fclose(dosya);
	*/
	char k1[50];
	FILE *dosya;
	dosya = fopen("Deneme.txt","r");
	if(dosya==NULL)
	{
		printf("Dosya Bulunamad�.");
	}else
	{
		printf("%d",!feof(dosya));
	
			while(!feof(dosya))
			{
			fscanf(dosya,k1);
			//fgets(k1,50,dosya);	
			printf("%s",k1);
			}
			printf("%d",!feof(dosya));
	
	}
	fclose(dosya);

}
