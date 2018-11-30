#include <stdio.h>
#include <stdlib.h>
int i,arrLength=0;
int convNum[];


int main(void) {
	int sayi,taban,bolum,tempSayi;
	int *ptrtempSayi=&tempSayi;
	printf("Sayiyi giriniz. ->");scanf("%d",&sayi);
	printf("Donusturmek istediginiz sayi tabanini giriniz. ->");scanf("%d",&taban);
	tempSayi=sayi;
	for(i=0;i<100;i++){
		convNum[i]=tempSayi%taban;
		bolum=tempSayi/taban;
		printf("\n%d\n",bolum);
		tempSayi=bolum;
		arrLength++;
		if(tempSayi<taban){
			//arrLength++;
			convNum[i]=tempSayi;
			break;
		}
	}
	
	printf("debug:arrLength=%d\n\n",arrLength);
	for(i=0;i<=arrLength;i++){
	printf("%d",convNum[i]);
	}
	
	
	
	
	getch();
	return 0;
}
