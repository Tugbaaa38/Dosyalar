#include <stdio.h>
#include <stdlib.h>
// dosyaya bilgi aktarma
int main() {
	char karakter[40];
	FILE *dosya;
	dosya=fopen("C:\\Users\\TK\\Desktop\\deneme.txt","w");  
	
	char bilgi1[20]="Tugba ";
	char bilgi2[20]="Kirac ";
	char bilgi3[20]="21";
	
	fputs(bilgi1,dosya);
	fputs(bilgi2,dosya);
	fputs(bilgi3,dosya);

	fclose(dosya);

	return 0;
}
