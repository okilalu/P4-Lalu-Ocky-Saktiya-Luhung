#include<stdio.h>
int main(){
	printf("NAMA     : LALU OCKY SAKTIYA LUHUNG\n");
	printf("NIM      : F1B019079\n");
	printf("KELOMPOK : 16\n");
	
	printf("\nPROGRAM TRANSPOSE MATRIX\n");
	printf("\n========================\n");
	int i,j,b,k;
	int matriks [3][3];
	int transpose [3][3];
	
	printf("Masukkan Baris Matriks : \n");
	scanf("%d",&b);
	printf("Masukkan Kolom Matriks : \n");
	scanf("%d",&k);
	
	printf("Masukkan Elemen Matriks : \n");
	for (i=0 ; i<3; i++){
		for(j=0; j<3; j++){
		scanf("%d",&matriks[i][j]);	
		}
	}
	for (i=0 ; i<3; i++){
		for(j=0; j<3; j++){
		transpose[j][i]=matriks[i][j];	
		}
	}
	printf("Hasil Transpose Matriks : \n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d",transpose[i][j]);
		}
	}
}




