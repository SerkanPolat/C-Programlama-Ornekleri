#include <stdio.h>

//�oklu Dizi Yap�s� Matris �eklinde Bellekte Tutulur
// int matris[sat�r sayisi][s�t�n sayisi];
// matris[0][1]=1; Dizinin 0.S�t�n 1.Sat�rdaki De�eri 1 Olur.  
/*
int main ()
{
	int satir,sutun;
	scanf("%d",&satir);
	scanf("%d",&sutun);
	int matris[satir][sutun];
	for(int i=1;i<=satir;i++)
	{
		for(int j=1;j<=sutun;j++)
		{
			matris[i][j]=1;
			printf("%d%d",matris[i][j],matris[j][j]);
			printf(" ");
		}	
		
		printf("\n");
	}	
}
*/
int main()
{
	int matris[2][2][2][2];
	
	scanf("%d",&matris[2][2][2][0]);
	scanf("%d",&matris[2][2][2][1]);	
	printf("%d",matris[2][2][2][0]);
	
	
	
}
