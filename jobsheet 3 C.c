#include<stdio.h>
int main(){
	printf("NAMA     : LALU OCKY SAKTIYA LUHUNG\n");
	printf("NIM      : F1B019079\n");
	printf("KELOMPOK : 16\n");
	
	printf("\nPROGRAM MENGHITUNG PERTAMBAHAN MATRIX\n");
	printf("\n======================================\n");
	int i,j,k,b,matrix1[9][9],matrix2[6][6],hasil[2][2];
	printf("Masukkan Baris Matriks : \n");
	scanf("%d",&b);
	printf("Masukkan Kolom Matriks : \n");
	scanf("%d",&k);
	
	printf("masukkan Elemen Matriks Pertama : \n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("masukkan Elemen Matriks Kedua : \n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("Hasil Pertambahan Matriks : \n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			hasil[i][j]=matrix1[i][j] + matrix2[i][j];
			printf("%d",hasil[i][j]);
		}
		printf("\n");
	}
}

