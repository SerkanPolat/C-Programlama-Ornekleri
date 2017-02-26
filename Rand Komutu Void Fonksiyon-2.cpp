#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sayisalloto()
{
	srand(time(NULL));
	for(int i =0;i<7;i++)
	{
		printf("Kolon No : %d\t",i);
		for(int j=1;j<=6;j++)
		{
			
			printf("\n%d\t",rand()%45);
		}
		printf("\n");
	}
	
}

int main()
{
	sayisalloto();
	
	
}
