# C-Programming
C Programming Examples
#include <stdio.h>

int main()
{
	git:
	int secim,
 	sayi1,sayi2;
	printf("\n1-Toplama Islemi icin : 1\n");
	printf("2-Cikarma islemi icin : 2\n");
	printf("3-Bolme �slemi �cin : 3\n");
	printf("4-Carpma �slemi �cin : 4\n");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			printf("2 Say� Giriniz");
			scanf("%d",&sayi1);
			scanf("%d",&sayi2);
			printf("%d ve %d : %d",sayi1,sayi2,(sayi1+sayi2));
		 break;
		case 2:
						printf("2 Say� Giriniz");
			scanf("%d",&sayi1);
			scanf("%d",&sayi2);
			printf("%d ve %d : %d",sayi1,sayi2,(sayi1-sayi2));
		 break;
		case 3:
					printf("2 Say� Giriniz");
			scanf("%d",&sayi1);
			scanf("%d",&sayi2);
			printf("%d ve %d : %d",sayi1,sayi2,(sayi1/sayi2)); 
			break;
		case 4:
					printf("2 Say� Giriniz");
			scanf("%d",&sayi1);
			scanf("%d",&sayi2);
			printf("%d ve %d : %d",sayi1,sayi2,(sayi1*sayi2));
			 break;
			 default : printf("Do�ru D�zg�n �eyler Gir Lan");
			 break;
	}
	goto git;
	
}
