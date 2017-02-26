#include <stdio.h>
#include <string.h>

//struct Diziler Normal Tek Deðiþken Üzerine OluþturuLan Dizilerin Geliþmiþ Versiyonu Olarak Düþünülebilir Struct Dizi Ýçinde Birçok Deðiþkenli Deðer Tutabilir.

// Kullaným Aþþaðýdaki Gibidir.struct Dizi Ýçerisinde Atama Ýþlemi Yapýlabilir Fakat Yapýlmasý Doðru Kabul Edilmez.
//Nedeni ise Struct'lar Dizi Olarak Kullanýldýðýndan Ýçerisindeki Deðer Atamasý O Deðiþkene Sürekli Her Seferinde O Deðerin Atýlmasýný Saðlar.

struct fabrika
{
	char FabrikaAdi[40];
	char isciAdi[20];
	char isciSoyad[30];
	int isciMaas;
	float isciPuan;
	// }'dan Sonra Yazýlan fbr Komutu 1 Tane Struct Kullanýlacaðýný Söyler.Oraya fbr2,fbr3 Eklenirse struct Diziden 3 Tane Olmuþ Olur
	//Hepsinin Kullanýmlarý Kendi Komutlarýna Göre Yapýlýr. Örnek fbr.FabrikaAdi ; fbr2.FabrikaAdi ;
}fbr,fbr2,fbr3;

int main()
{
	//Struct Dizilerde fbr.FabrikaAdi="VBS Biliþim Hizmetleri"; Komutu Çalýþmadýðýndan 
//	<string.h> Kütüphanesi Açýlarak strcpy Komutu Ýle 2.Bölümdeki String Deðer Struct Dizinin Char Dizisine Atýlýr.
// Sayýsal Deðiþkenlerde Böyle Bir Sorun Yoktur Direk Atama Yapýlabilir.

//1.Struct Verileri Dolduruluyor.
	strcpy(fbr.FabrikaAdi,"VBS Biliþim Hizmetleri");
	strcpy(fbr.isciAdi,"Serkan");
	strcpy(fbr.isciSoyad,"Polat");
	fbr.isciMaas=10000;
	fbr.isciPuan=3.25;
	//2.Struct Verileri Dolduruluyor.
	strcpy(fbr2.FabrikaAdi,"VBS Biliþim Hizmetleri");
	strcpy(fbr2.isciAdi,"Volkan");
	strcpy(fbr2.isciSoyad,"Polat");
	fbr2.isciMaas=10000;
	fbr2.isciPuan=3.25;
	char den[60];
	
	//**scanf Komutu Boþluk Gördüðü Anda Veri Almayý Keser.Ancak gets Komutu ile Alt Satýra Geçinceye Kadar Veri Almaya Devam Eder.
	//Yani Bir Metin Gireceksek scanf'le Yazarsak Metinin Ýlk Kelimesini gets ile Yazarsak Metnin Tamamýný Almamýza Ýmkan Saðlar.
	printf("Sirasiyla Fabrika Adi,Ýsci Adi,Ýsci Soyadi,Ýscinin Maasi ve Ýscinin Puanini Giriniz : ");
	gets(fbr3.FabrikaAdi);
	gets(fbr3.isciAdi);
	gets(fbr3.isciSoyad);
	scanf("%d",&fbr3.isciMaas);
	scanf("%f",&fbr3.isciPuan);
	//Veriler Artýk Girildi Girilen Verileri Ekrana Basalým.
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
	
	printf("\nGirilen Deðerlere Göre Oluþturulan Struct\n");
	printf("\n%s\n",fbr3.FabrikaAdi);
	printf("%s\n",fbr3.isciAdi);
	printf("%s\n",fbr3.isciSoyad);
	printf("%d\n",fbr3.isciMaas);
	printf("%.2f\n",fbr3.isciPuan);
	
}
