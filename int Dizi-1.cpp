#include <stdio.h>

//Çoklu Dizi Yapýsý Matris Þeklinde Bellekte Tutulur
// int matris[satýr sayisi][sütün sayisi];
// matris[0][1]=1; Dizinin 0.Sütün 1.Satýrdaki Deðeri 1 Olur.  
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
