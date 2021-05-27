#include <stdio.h>
#include <stdlib.h>

int main() {
	// dongu olmadan dosyadan bilgi okuma
	char karakter[40];
	FILE *dosya;
	dosya=fopen("C:\\Users\\TK\\Desktop\\deneme.txt","r");  
	
	fgets(karakter,20,dosya);       //sonlandirma karakterini de aldigi icin bosluklarla birlikte 19 karakter yazar.
	puts(karakter);

	fclose(dosya);

	return 0;
}
