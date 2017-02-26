#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

/*
		<stdio.h> = Printf scanf Gibi Giriþ Çýkýþ Komutlarýnýn
			Kullanýlmasý Ýçin Kullanýlan Kütüphanedir.
		
		int için %d
		float için %f
		double %lf
		char %s ve %c
		
		Printf týrnak için karakterleri
		\a Ses Çýkarýr
		\n Alt Satýra Geç
		\" Çift Týrnak Ekrana Yaz
		\t Tab Bas
		
		scanf Kullanýmý
		
		scanf("%deðiþken kodu",&deðiþken adý);
		Örnek : int sayi; scanf("%d",&sayi);
		
		Diðer Matematiksel Ýþlemler için
		#include <math.h>
		
		int abs(x) = Mutlak Deðer Hesabý
		double fabs(x) = Ondalýklý Mutlak Deðer Hesabý
		double sqrt(x) = Karekökü Hesaplama
		double pow(x,y) = X in Y Üssünü Alýr.
		double log(x) = ln Tabanýnda logaritma hesabý
		double log10(x) = 10 Tabanýnda Logaritma Hesabý
		double ceil(x) = Fazla olana Yuvarlama
		double floor(x) = Az Olana Yuvarlama
		printf("-4'ün Mutlak Deðeri : %d\n\n",abs(4));
		printf("4'ün Karekökü : %.0lf\n",sqrt(4));
		printf("3 Ussu 12 : %.0lf\n",pow(3,12));
		printf("logaritma 10 tabanýnda 12'nin deðeri : %lf",log10(12));	
		printf("%lf",floor(3.14));
		
*/
int main()
{/*
	int sayi1=2,sayi2=5;
	float toplam=(float)sayi1+(float)sayi2;
	printf("%.0f",toplam);
	*/
 		int vize,final; float ort; 
	//	 printf("vize notunuz:"); scanf("%d",&vize);
	//	 printf("final notunuz:"); scanf("%d",&final);
 	//	 ort = (vize)*0.4+(final)*0.6;
  		
  int say=123;
  printf("%f",(float)say);
  
  
  
   if(ort>90 && ort<=100)
    { 
  		 printf("Not ortalamaniz: %.2f, Notunuz 'AA' ",ort);
    } 
		else if(ort>70 && ort <90)
	 { 
		printf("Not ortalamaniz: %.2f, Notunuz 'BB' ",ort);
	 } 
		 else if(ort>50 && ort <70) 
	 { 
		 printf("Not ortalamaniz: %.2f, Notunuz 'CC' ",ort);
	  } 
		  else if(ort>30 && ort <50) 
	  { 
		  printf("Not ortalamaniz: %.2f, Notunuz 'DD' ",ort); 
	  }// else
	//   { 
	//	  printf("Not ortalamaniz: %.2f Notunuz 'FF' ",ort); 
	  //}
	  getch();
	return 0;
};
