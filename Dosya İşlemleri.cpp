#include <stdio.h>

/*	Dosya Ýþlemleri Dosya Oluþturup Veri Yazma Okuma
Kullaným : 

FILE *dosya;
dosya = fopen("Dosya Adý","Mod");

	---Ýþlemler---	

fclose(dosya);

----Modlar

r : Var olan Bir Dosyanýn Okunmasýný Saðlar.
w : Dosya Oluþturma veya Yazma Saðlar.
a : Kayýtlý Dosyanýn Sonuna Veri Eklenmesini Saðlar.
r+ : Okuma ve Yazma Dosyanýn Daha Önceden Oluþmuþ Olmasý Gerekir.
w+ : Okuma ve Yazma ve Dosya Oluþturur.
a+ : Okuma ve Yazma Kayýtlý Dosyanýn Sonuna Veri Ekler.

---Dosya Fonksiyonlarý

fputs : Dosyaya Bir Karakter Veri Kaydeder.
fputs : Dosyaya Bir Karakter Dizisi Kaydeder.
fwrite : Dosyaya Bir Kayýt,Dizi veya Karakteri Ýkili Olarak Kaydeder.
fprintf : Dýsyaya Biçimlendirilmiþ veri Kaydeder.

fgetc : Dosyaya Bir Karakter Veri Okur.
fgets : Dosyaya Bir Karakter Dizisi Okur.
fread : Dosyaya Bir Kayýt,Dizi veya Karakteri Ýkili Olarak Okur.
fscanf  : Dosyaya Verileri Biçimlendirerek Okur.

FEOF : Dosya Sonunun Belirlenmesi
Kullaným
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
		printf("Dosya Bulunamadý.");
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
