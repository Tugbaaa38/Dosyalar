#include <stdio.h>
#include <stdlib.h>
// fwrite --> dosyaya bilgileri yazmamizi saglar.

int main() {
  
  char dizi[10]={'1','2','3','4','5','6','7','8','9','a'};
  FILE *fp;
  fp=fopen("C:\\Users\\TK\\Desktop\\dosya.txt","w");
  fwrite(dizi,1,10,fp);
  fclose(fp);
  
	return 0;
}
