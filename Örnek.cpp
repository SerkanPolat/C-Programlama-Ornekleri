#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

/*
		<stdio.h> = Printf scanf Gibi Giri� ��k�� Komutlar�n�n
			Kullan�lmas� ��in Kullan�lan K�t�phanedir.
		
		int i�in %d
		float i�in %f
		double %lf
		char %s ve %c
		
		Printf t�rnak i�in karakterleri
		\a Ses ��kar�r
		\n Alt Sat�ra Ge�
		\" �ift T�rnak Ekrana Yaz
		\t Tab Bas
		
		scanf Kullan�m�
		
		scanf("%de�i�ken kodu",&de�i�ken ad�);
		�rnek : int sayi; scanf("%d",&sayi);
		
		Di�er Matematiksel ��lemler i�in
		#include <math.h>
		
		int abs(x) = Mutlak De�er Hesab�
		double fabs(x) = Ondal�kl� Mutlak De�er Hesab�
		double sqrt(x) = Karek�k� Hesaplama
		double pow(x,y) = X in Y �ss�n� Al�r.
		double log(x) = ln Taban�nda logaritma hesab�
		double log10(x) = 10 Taban�nda Logaritma Hesab�
		double ceil(x) = Fazla olana Yuvarlama
		double floor(x) = Az Olana Yuvarlama
		printf("-4'�n Mutlak De�eri : %d\n\n",abs(4));
		printf("4'�n Karek�k� : %.0lf\n",sqrt(4));
		printf("3 Ussu 12 : %.0lf\n",pow(3,12));
		printf("logaritma 10 taban�nda 12'nin de�eri : %lf",log10(12));	
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
