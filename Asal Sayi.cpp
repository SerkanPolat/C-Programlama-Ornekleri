#include <stdio.h>
int main()
{
	int bolundu,bas,son;
	while(bas<=1)
	{
		printf("\nSayýyý Giriniz : ");
		scanf("%d",&bas);
	}
  scanf("%d",&son);
	
	for(int i=bas;i<=son;i++)
	{
		bolundu=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				bolundu=1;
				break;
			}
		}
		if(bolundu==0)
		{
			printf("%d\n",i);
		}
	}
}
