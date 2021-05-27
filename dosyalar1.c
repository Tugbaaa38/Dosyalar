#include <stdio.h>
#include <stdlib.h>

// Dosya Kisaltmalar ve Kavramlar 
/*
input - Giris
output - Cikis
File - Dosya
Put - Yazdirma 
Get - Okuma/Alma
Open - Acma    / fopen- dosya acmak icin kullaniriz.
Close - Kapama / fclose- dosya kapamak icn kullaniriz.
Write - Yazma / w
Read - Okuma / r
Add - Ekleme/ a


fputs - string ifadeleri yazar.(Toplu yazar.)
putc - karakter yazar.
fgets - Toplu okur.
getc - karakter alir.

EOF - End Of File (Dosya Sonu)

--> Programin adresini belirtmek icin adresin basina cift silas(\\) eklemeliyiz.(\ komutlarda kullandigimiz icin burada kullanmiyoruz.)
--> Gosterici iki tane parametre almasi gerekiyor. Birinci parametre adresi tutar, ikinci parametre gorevi tutar.(w,r,a)

*/
// Dosya Olusturma 
int main() {
	
	FILE *f;
	f=fopen("C:\\Users\\TK\\Desktop\\yeni.txt","w");   // bu kisimda artik dosya olustu.
	
	putc('T',f);
	putc('K',f);                                      // dosyada TK yazacaktir.
	
	putc('\n',f);
	
	putc('T',f);
	putc('\n',f);                                      // alt alta yazsin istersek bu sekil yapariz..
	putc('K',f);  
	
	fclose(f);                                        // dosyayi kapattik bundan sonra bilgi ekleyemeyiz.
	return 0;
}
