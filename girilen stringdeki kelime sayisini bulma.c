#include<stdio.h>

int main()
{
   int i,a=0;
   char bosluk[1]={" "};//bosluk karakteri tan�mlamas�
   char str[500];
 
   printf("Bir yazi giriniz\n");
   gets(str);
 for(i=0;i<strlen(str);i++){//strlen, string lenght ten gelir karakter uzunlugu anlam�ndad�r,toplam girilen karakter say�s�n� tutmayla gorevli. 
 		if(str[i]==bosluk[j]){//her bosluk karakteri gordugunde bir kelime sayacak,ancak 5 kelimelik dizide 4 bo�luk var o yuzden yazd�r�rken 1 artt�raca��z
 		a++;
	 }

 }
 printf("Cumledeki kelime sayisi:%d\nCumledeki harf sayisi:%d",a+1,strlen(str)-a);//harf say�s� icin toplam karakter sayisindan bosluk karakterlerini ��kard�k
   return 0;
}
