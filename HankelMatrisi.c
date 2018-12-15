#include <stdio.h>
#include <stdlib.h>
int boyut,i,j;
void yazdir(int [][boyut]);
int hesapla(int[][boyut]);

int main(void) {

	printf("hankel matrisinin boyutunu giriniz. ->");scanf("%d",&boyut);
	int hankelMatris[boyut][boyut];
	//Hankel matrisinin oluşturulması
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			hankelMatris[i][j]=j+1;
		}
	}
	printf("\n\n");
	printf("Girilen boyutta Hankel Matrisi:");
	printf("\n\n");
	yazdir(hesapla(hankelMatris));
	getch();
	return 0;
}

int hesapla(int a[][boyut]){
	int tempSayi,temp[boyut];
	for(i=0; i<boyut; i++){
		temp[i]=a[i][i];
	}
	
	for(i=1; i<=boyut; i++){
		a[i][boyut-1]=temp[i-1];
		for(j=1; j<=boyut-1;j++){
			tempSayi = a[i-1][j];
			a[i][j-1] = tempSayi;
	}
}
	return a;
}



void yazdir(int b[boyut][boyut]){
	for(i=0; i<boyut; i++){
		for(j=0; j<boyut; j++){
			printf("%d  ",b[i][j]);
		}
	 printf("\n");
	}
}

