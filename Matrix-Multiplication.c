#include <stdio.h>
#include <stdlib.h>
int row1,column1,row2,column2;


int main () {
	int i,j,p1,p2;//p1 and p2 are variables which will be used to print the matrices
	printf("Enter the n and m values of first nxm ranked matrix. ->");scanf("%d%d",&row1,&column1);
	  //Block of code that creates matrix1.
	  int matrix1[row1][column1];
	   for(i=0;i<row1;i++){
	   	for(j=0;j<column1;j++){ 
  	 	printf("Enter the values of a%d.%d ->",i+1,j+1);scanf("%d",&matrix1[i][j]);
  	 	}
	   }
	//Block of code that prints the matrix1.
	printf("------------------------------------\n");
	for(p1=0;p1<row1;p1++){
		for(p2=0;p2<column1;p2++){
			printf("%d   ",matrix1[p1][p2]);
		}	
		printf("\n");
	}
	printf("\n");
	
	
  
	
	printf("Enter the n and m values of second nxm ranked matrix. ->");scanf("%d%d",&row2,&column2);
  	 //Block of code that creates matrix2.
	  int matrix2[row2][column2];
	   for(i=0;i<row2;i++){
	   	for(j=0;j<column2;j++){ 
  	 	printf("Enter the values of a%d.%d ->",i+1,j+1);scanf("%d",&matrix2[i][j]);
  	 	}
	   }
	//Block of code that prints the matrix2.
	printf("-------------------------------------\n");
	for(i=0;i<row2;i++){
		for(j=0;j<column2;j++){
			printf("%d   ",matrix2[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
   
   
   
   
   getch();
   return 0;
}
