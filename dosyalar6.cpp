#include <stdio.h>
#include <stdlib.h>
/*
not:
r+ --> dosyayi okuma ve yazma icin acar ve dosyanin basini gosterir.
w+ --> dosyayi okuma ve yazma icin acar(mevcut dosyanin uzerine yazar.)
a+ --> dosyayi okuma ve yazma icin acar(dosyaya ekleme yapar)
*/
/*
*********************fprintf kullanimi********************************
syntax: *************fprint(dosya adi,"string",degiskenler);**********
*/
int main() {
     int sayi=5;
     float Osayi=8.7;
     char harf='T';
     
     FILE *fp;
     fp=fopen("C:\\Users\\TK\\Desktop\\yeni.txt","w");
     fprintf(fp,"%d , %.2f ,%c",sayi,Osayi,harf);     //fprintf=dosyaya bilgileri basar.
 
     fclose(fp);

	return 0;
}
