#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi[10],gsayi;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&sayi[i]);				
		
	}
	printf("Aranacak Sayi Gir");
	scanf("%d",&gsayi);
	for(int j=0;j<10;j++)
	{
		if(sayi[j]==gsayi)
		{
			printf("Sayi Bulundu.");
		}
		else
		{
			printf("Mlsf blnmadi .s.s");
			break;
		}
		
	}
	
	
}
