#include <stdio.h>
//�al��an Say�s� Giilecek Ard�ndan Maa�lar� Girilecek
//Maa� D�zenlemesi Yap�labilecek
//���ilerin Ortalama Maa� Hesab�
int main()
{
	int secim,isci,maas;
	printf("�sci Sayisini Giriniz : ");
	scanf("%d",&isci);
	printf("\n");
	int matris[isci][isci];
	for(int i=1;i<=isci;i++)
	{
		
		printf("\n%d.�scinin Maasini Giriniz : ",i); 
		scanf("%d",&maas);
		matris[0][i-1]=maas;
	}
	git:
	printf("\n\n\n\n\n\n1- �sci Maas Sirala");
	printf("\n2-Maas Duzenle : ");
	scanf("%d",&secim);
	if(secim==1)
	{
		for(int j=0;j<isci;j++)
		{
			printf("%d\t%d\n",j+1,matris[0][j]);
			
			
		}
		
	}else
	{
		int Num;
		int maasYeni;
		printf("D�zenlenecek �scinin Numarasi : ");
		scanf("%d",&Num);
		printf("\nYeni Maasini Giriniz : ");
		scanf("%d",&maasYeni);
		matris[0][Num-1] =maasYeni;
		printf("\n\nG�ncelleme Ba�ar�l�");
		goto git;
	}
	
}
