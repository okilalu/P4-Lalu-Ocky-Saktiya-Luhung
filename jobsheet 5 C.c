#include<stdio.h>
int main(){
	printf("NAMA     : LALU OCKY SAKTIYA LUHUNG\n");
	printf("NIM      : F1B019079\n");
	printf("KELOMPOK : 16\n");
	
	printf("\nPROGRAM MENGHITUNG PERKALIAN  MATRIX\n");
	printf("\n======================================\n");
	
	int matrix1[9][9],matrix2[6][6],hasil[2][2];
	int i,j,e,b,k,o,p,jumlah =0;
	printf("Masukkan Baris Matriks Pertama : \n");
	scanf("%d",&b);
	printf("Masukkan Kolom Matriks Pertama : \n");
	scanf("%d",&k);
	
	printf("Masukkan Baris Matriks Kedua : \n");
	scanf("%d",&o);
	printf("Masukkan Kolom Matriks Kedua : \n");
	scanf("%d",&p);
	
	if(k !=p){
		printf("MAsukkan Elemen Matriks Pertama : \n");
		for (i=0; i<2; i++){
			for (j=0; j<2; j++){
				scanf("%d",&matrix1[i][j]);
			}
		}
		printf("MAsukkan Elemen Matriks Kedua : \n");
		for (i=0; i<2; i++){
			for (j=0; j<2; j++){
				scanf("%d",&matrix2[i][j]);
        	}
        }
        for (i=0; i<2; i++){
        	for (j=0; j<2; j++){
        		for (e=0; e<2; e++){
        			jumlah=matrix1[i][j]*matrix2[i][j];
				}
				hasil[i][j]=jumlah;
				jumlah=0;
			}
		}
		printf("Hasil Perkalian Matriks : \n");
		for (i=0; i<2; i++){
			for (j=0; j<2; j++){
				printf("%d",hasil[i][j]);
			}
			printf("\n");
		}		
  }
}


