#include <stdio.h>

int main()
{
	int sayi,toplam=0,toplam2=0;
	printf("Bir Sayi Giriniz : ");
	scanf("%d",&sayi);
	int i;
	for(i;i<=sayi;i++)
	{
		if(i%2==0)
		{
			toplam+=i;
		
		}else
		{
			toplam2+=i;
		
		}
	}
	printf("Girilen %d Sayisinin Tek Sayiler Toplami = %d \n Cift Sayilar Toplami = %d",sayi,toplam2,toplam);
	
	
	
}
