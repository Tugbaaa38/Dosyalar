#include <stdio.h>
#include <stdlib.h>
// fread --> Dosyamizin icindeki bilgiyi okur.

int main() {
    FILE *f;
    char dizi[30];
    if(f=fopen("C:\\Users\\TK\\Desktop\\deneme.txt","r"))
	{
		 fread(dizi,1,9,f);
		 dizi[9]=0;       //bu sekilde sonlandirmamiz gerekiyor.
		 fclose(f);
		 printf("Dosyanin ilk 9 karakteri:\n %s\n",dizi);	
	}    
	else
	{
		printf("HATA!");
	}

	return 0;
}
