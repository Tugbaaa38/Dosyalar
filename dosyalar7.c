#include <stdio.h>
#include <stdlib.h>


int main() {
     int n1=5,n2;
     float n3=8.7,n4=13.72,n5,n6;
     
     FILE *f1;
     f1=fopen("C:\\Users\\TK\\Desktop\\dosya.txt","w");
     fprintf(f1,"%d , %f , %f",n1,n3,n4);       // f1 dosyasina bilgileri bastik.
     
     fclose(f1);
     
     FILE *f2;
     f2=fopen("C:\\Users\\TK\\Desktop\\dosya.txt","r");
     fscanf(f2,"%d , %f , %f",&n2,&n5,&n6);     // fscanf dosyanin icindekileri aldi ve degiskenlere atadi.
     
     printf("%d %f %f\n",n1,n3,n4);
     printf("%d %f %f\n",n2,n5,n6);
     
     fclose(f2);
    
	return 0;
}
