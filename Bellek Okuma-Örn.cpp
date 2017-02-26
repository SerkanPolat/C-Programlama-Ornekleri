#include <stdio.h>
int main()
{
	char sayi[10];
	char *Ptr;
	scanf("%s",&sayi);
	Ptr=&sayi[0];
	for(int i=0;i<20000;i++)
	{	
	
	
		if((Ptr+i)==NULL)
		{
		i--;
		printf("\n");
	}
		if((*(Ptr+i)<123)&&*(Ptr+i)>40)
		printf("%s",Ptr+i);
		
		
	}
	
	
}
