#include <stdio.h>
//	strcpy(At�lacak Yer,At�lacak Veri)
#include <string.h>
//C Dili esnek bir dil olmad���ndan metinsel ifadelerde karakter="Serkan";
//	Diye bir�ey olmad�g�ndan bu strcpy komutu ile sa�lan�r. 
int main()
{
	char karakter[10];
	strcpy(karakter,"Serkan");
	printf("%s",karakter);	
	
}
