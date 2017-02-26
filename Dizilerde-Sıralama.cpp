
/*
#include <stdio.h>

//Ýkili Deðiþimler Ele Alýnarak For Döngüsüyle Sýraya Sokuldu.
int main()
{
	
	int dizi[5]={12,15,67,45,34},bellek=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				bellek=dizi[j+1];
				dizi[j+1]=dizi[j];
				dizi[j]=bellek;
				
			}
		}
	}
	for(int a=0;a<5;a++)
	{
		printf("%d\n",dizi[a]);
		
	}
}


*/

#include <stdio.h>

int main()
{
	int DiziSayisi=0,bellek;
	printf("Dizi Sayisini Giriniz : ");
	scanf ("%d",&DiziSayisi);
	int dizi[DiziSayisi];
	for(int i = 0;i<DiziSayisi;i++)
	{
		printf("%d. Sayiyi Giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	for(int j=0;j<DiziSayisi;j++)
	{
		for(int a=0;a<(DiziSayisi-1);a++)
		{
			if(dizi[a]<dizi[a+1])
			{
				bellek=dizi[a+1];
				dizi[a+1]=dizi[a];
				dizi[a]=bellek;
				
			}
			
			
		}
		
	}
	for(int b=0;b<DiziSayisi;b++)
	{
		printf("%d.Eleman = %d\n",b+1,dizi[b]);
		
	}
}
 
