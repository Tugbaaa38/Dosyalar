#include <stdio.h>
#include <stdlib.h>

int main() {
	char karakter;
	FILE *dosya;
	dosya=fopen("C:\\Users\\TK\\Desktop\\bilgilerim.txt","r");  //once dosyamizi okuma modunda aciyoruz.(bilgilerim adinda bir metin dosyasi olusturup oraya bilgilerimizi yaziyoruz.)
    
    // Okumada dongu icine almazsak sadece ilk karakteri okur.
    do{
      karakter=getc(dosya);
	  printf("%c",karakter);	
    	
	}while(karakter!=EOF);
	
	fclose(dosya);

	return 0;
}
