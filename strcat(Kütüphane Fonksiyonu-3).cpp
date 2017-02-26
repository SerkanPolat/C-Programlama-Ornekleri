#include <stdio.h>
#include <string.h>
//	strcat(Eklenilecek Yer,Eklenilecek Kelime Dizisi);
//	  strcat Komutu 2.Bloktaki Kelime Dizisini Alýr 1.Bloktaki Kelime Dizisinin Sonuna Ekler.
int main()
{
	char kelime1[]="Merhaba",kelime2[]="Dunya";
	strcat(kelime1,kelime2);
	printf("%s",kelime1);
}
