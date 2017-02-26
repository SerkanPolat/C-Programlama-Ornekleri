#include <stdio.h>
#include <stdlib.h>
	/*
	Bellek Yönetimi Esneklik Saðlar Sonradan Veri Giriþini Saðlar.
	Bellek Yönetimi Ýçin Komutlar (malloc = Memory Allocation),(realloc = Re-Allocation),(Calloc),(Free) Allocation = Tahsis Etmek,Almak
	Ramden Alma Komutlarý Belli Bir Pointere Aktarýlarýlýr ve Pointer Artýk Dizi Olarakta Kullanýlabilir.
	int *ptr = malloc(Ram'den Alýnacak Byte Miktarý); Malloc Ramden Belirtilen Yer Kadar Alan Ayýrýr.
	int *ptr = calloc(Ayrýlacak Byte,Deðiþken Tipinin Byte Deðeri); Calloc Ramden Belirtilen Yer Kadar Alan Ayýrýr.
	Calloc Ýle Malloc Arasýndaki Fark ise Malloc Ramden Ayýrdýðý Bölüme Hiç Dokunmaz.Sadece Ramden Yeri Ayýrýr.Calloc Ýse Ramden Ayýrdýðý Yerlerin Ýçine 0 Deðeri Atar.
	Calloc Malloc'a Göre Daha Düzenli Ama Daha Yavaþtýr.
	Realloc Yeniden Boyutlandýrma Ýçin Kullanýlýr.
	ptr = realloc(Alanýn Sahibi,Alanýn Yeni Boyutu);  	   	ptr = realloc(ptr,5*sizeof(int));	20 Bytlýk Yer Ayýrýr.
	free(Alanýn Sahibi);  free(ptr); Free Komutu Her Bellek Ýþlerimden Sonra Yazýlmasý Gereken Bir Komuttur.Bellekteki Yer Bu Komutla Serbest Kalýr Aksi Halde Sürekli Ram'i Ýþgal Eder.
	
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
