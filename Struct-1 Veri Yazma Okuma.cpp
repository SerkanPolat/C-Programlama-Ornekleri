#include <stdio.h>
#include <string.h>

//struct Diziler Normal Tek De�i�ken �zerine Olu�turuLan Dizilerin Geli�mi� Versiyonu Olarak D���n�lebilir Struct Dizi ��inde Bir�ok De�i�kenli De�er Tutabilir.

// Kullan�m A��a��daki Gibidir.struct Dizi ��erisinde Atama ��lemi Yap�labilir Fakat Yap�lmas� Do�ru Kabul Edilmez.
//Nedeni ise Struct'lar Dizi Olarak Kullan�ld���ndan ��erisindeki De�er Atamas� O De�i�kene S�rekli Her Seferinde O De�erin At�lmas�n� Sa�lar.

struct fabrika
{
	char FabrikaAdi[40];
	char isciAdi[20];
	char isciSoyad[30];
	int isciMaas;
	float isciPuan;
	// }'dan Sonra Yaz�lan fbr Komutu 1 Tane Struct Kullan�laca��n� S�yler.Oraya fbr2,fbr3 Eklenirse struct Diziden 3 Tane Olmu� Olur
	//Hepsinin Kullan�mlar� Kendi Komutlar�na G�re Yap�l�r. �rnek fbr.FabrikaAdi ; fbr2.FabrikaAdi ;
}fbr,fbr2,fbr3;

int main()
{
	//Struct Dizilerde fbr.FabrikaAdi="VBS Bili�im Hizmetleri"; Komutu �al��mad���ndan 
//	<string.h> K�t�phanesi A��larak strcpy Komutu �le 2.B�l�mdeki String De�er Struct Dizinin Char Dizisine At�l�r.
// Say�sal De�i�kenlerde B�yle Bir Sorun Yoktur Direk Atama Yap�labilir.

//1.Struct Verileri Dolduruluyor.
	strcpy(fbr.FabrikaAdi,"VBS Bili�im Hizmetleri");
	strcpy(fbr.isciAdi,"Serkan");
	strcpy(fbr.isciSoyad,"Polat");
	fbr.isciMaas=10000;
	fbr.isciPuan=3.25;
	//2.Struct Verileri Dolduruluyor.
	strcpy(fbr2.FabrikaAdi,"VBS Bili�im Hizmetleri");
	strcpy(fbr2.isciAdi,"Volkan");
	strcpy(fbr2.isciSoyad,"Polat");
	fbr2.isciMaas=10000;
	fbr2.isciPuan=3.25;
	char den[60];
	
	//**scanf Komutu Bo�luk G�rd��� Anda Veri Almay� Keser.Ancak gets Komutu ile Alt Sat�ra Ge�inceye Kadar Veri Almaya Devam Eder.
	//Yani Bir Metin Gireceksek scanf'le Yazarsak Metinin �lk Kelimesini gets ile Yazarsak Metnin Tamam�n� Almam�za �mkan Sa�lar.
	printf("Sirasiyla Fabrika Adi,�sci Adi,�sci Soyadi,�scinin Maasi ve �scinin Puanini Giriniz : ");
	gets(fbr3.FabrikaAdi);
	gets(fbr3.isciAdi);
	gets(fbr3.isciSoyad);
	scanf("%d",&fbr3.isciMaas);
	scanf("%f",&fbr3.isciPuan);
	//Veriler Art�k Girildi Girilen Verileri Ekrana Basal�m.
	printf("\n%s\n",fbr.FabrikaAdi);
	printf("%s\n",fbr.isciAdi);
	printf("%s\n",fbr.isciSoyad);
	printf("%d\n",fbr.isciMaas);
	printf("%.2f\n",fbr.isciPuan);
	
	printf("\n%s\n",fbr2.FabrikaAdi);
	printf("%s\n",fbr2.isciAdi);
	printf("%s\n",fbr2.isciSoyad);
	printf("%d\n",fbr2.isciMaas);
	printf("%.2f\n",fbr2.isciPuan);
	
	printf("\nGirilen De�erlere G�re Olu�turulan Struct\n");
	printf("\n%s\n",fbr3.FabrikaAdi);
	printf("%s\n",fbr3.isciAdi);
	printf("%s\n",fbr3.isciSoyad);
	printf("%d\n",fbr3.isciMaas);
	printf("%.2f\n",fbr3.isciPuan);
	
}
