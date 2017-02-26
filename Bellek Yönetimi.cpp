#include <stdio.h>
#include <stdlib.h>
	/*
	Bellek Y�netimi Esneklik Sa�lar Sonradan Veri Giri�ini Sa�lar.
	Bellek Y�netimi ��in Komutlar (malloc = Memory Allocation),(realloc = Re-Allocation),(Calloc),(Free) Allocation = Tahsis Etmek,Almak
	Ramden Alma Komutlar� Belli Bir Pointere Aktar�lar�l�r ve Pointer Art�k Dizi Olarakta Kullan�labilir.
	int *ptr = malloc(Ram'den Al�nacak Byte Miktar�); Malloc Ramden Belirtilen Yer Kadar Alan Ay�r�r.
	int *ptr = calloc(Ayr�lacak Byte,De�i�ken Tipinin Byte De�eri); Calloc Ramden Belirtilen Yer Kadar Alan Ay�r�r.
	Calloc �le Malloc Aras�ndaki Fark ise Malloc Ramden Ay�rd��� B�l�me Hi� Dokunmaz.Sadece Ramden Yeri Ay�r�r.Calloc �se Ramden Ay�rd��� Yerlerin ��ine 0 De�eri Atar.
	Calloc Malloc'a G�re Daha D�zenli Ama Daha Yava�t�r.
	Realloc Yeniden Boyutland�rma ��in Kullan�l�r.
	ptr = realloc(Alan�n Sahibi,Alan�n Yeni Boyutu);  	   	ptr = realloc(ptr,5*sizeof(int));	20 Bytl�k Yer Ay�r�r.
	free(Alan�n Sahibi);  free(ptr); Free Komutu Her Bellek ��lerimden Sonra Yaz�lmas� Gereken Bir Komuttur.Bellekteki Yer Bu Komutla Serbest Kal�r Aksi Halde S�rekli Ram'i ��gal Eder.
	
	*/
int main()
{
	int *ptr = (int*)malloc(5*sizeof(int));
	ptr[0]=34564;
	ptr[1]=34765;
	ptr[2]=34453;
	ptr[3]=34123;
	ptr[4]=34342;
	for(int i = 0 ; i<5;i++)
	{
		printf("%d \t%x\n",ptr[i],ptr[i]);
	}
		
	printf("\n\n\n");
	ptr = (int*)realloc(ptr,3*sizeof(int));
	for(int i = 0 ;i<3;i++)
	{
		printf("%d \t%x\n",ptr[i],ptr[i]);
		
	}
	ptr = (int*)realloc(ptr,10*sizeof(int));
	for(int i = 0 ;i<10;i++)
	{
		printf("\n%d \t%x\n",ptr[i],ptr[i]);
		
	}
	free(ptr);
}
