#include <stdio.h>

//Pointerler Dizi Y�netiminde Kullan�labilir.
//Diziler Bellekte S�rayla Tutulduklar� ��in ptr=dizi; �le Dizinin �lk Eleman� Pointere At�l�r ve Pointer Adresi 1 Artt�r�larak T�m Diziye Eri�ilebilir.

int main()
{
/*	
	{ 
	
	int *ptr;
	int dizi[10];
	ptr=dizi;
	
	for(int i=0;i<10;i++)
	{
	printf("%p\t",(ptr+i));
	printf("%d\n",dizi[i]);
	}
}
*/	
	// Karakter Dizileri
	//Di�er Dizi Kullan�m�yla Ayn�d�r Sadece Biti� De�eri NULL De�eri Yani Bos De�erdir.
	//C Dili B�y�k K���k Harf Duyarl�d�r.
	
	int i=0;
	char metin[]="Merhaba D�nya";
//	for(int i=0;i<13;i++)
while(metin[i]!=NULL)
{
	printf("%c\n",i);
	i++;
}
	
}
