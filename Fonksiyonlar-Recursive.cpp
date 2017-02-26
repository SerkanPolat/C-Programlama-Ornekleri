#include <stdio.h>
#include <stdlib.h>
int fak(int sayi)
{
	if(sayi==1)
	{
		printf("1\n");
		return 1;
		
	}
	else
	{
		printf("%d\n",sayi*fak(sayi-1));
		return sayi*fak(sayi-1);	
	}
}

int main()
{
	
	printf("%d",fak(5));
}
