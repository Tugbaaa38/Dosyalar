#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\TK\\Desktop\\bilgilerim.txt","w");  //once dosyamizi yazma modunda aciyoruz.
	
	// bilgilerimizi 2 sekilde yazdiralim.
	//1.yontem
	fputs("Tugba ",dosya);
	fputs("Kirac",dosya);
	putc('\n',dosya);
	fputs("Harran Universitesi",dosya);
	putc('\n',dosya);
	fputs("21",dosya);
	putc('\n',dosya);
	
	
	//2.yontem
	fputs("Tugba Kirac\nHarran Universitesi\n21",dosya);
	
	fclose(dosya);

	return 0;
}
