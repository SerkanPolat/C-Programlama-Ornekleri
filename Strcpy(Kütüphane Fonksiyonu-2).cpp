#include <stdio.h>
//	strcpy(Atýlacak Yer,Atýlacak Veri)
#include <string.h>
//C Dili esnek bir dil olmadýðýndan metinsel ifadelerde karakter="Serkan";
//	Diye birþey olmadýgýndan bu strcpy komutu ile saðlanýr. 
int main()
{
	char karakter[10];
	strcpy(karakter,"Serkan");
	printf("%s",karakter);	
	
}
