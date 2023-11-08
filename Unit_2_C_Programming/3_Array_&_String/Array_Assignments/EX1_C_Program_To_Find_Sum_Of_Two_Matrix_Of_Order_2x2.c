/*
 * ArraysEx1.c
 *
 *  Created on: 7 nov. 2023
 *      Author: anasb
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
float A[2][2],B[2][2],Sum[2][2];
int i,j;
// Entered  the elements of 1st matrix
printf("Enter the elements of 1st  matrix: \n ");
for (i=0;i<2;i++){
	for(j=0;j<2;j++){
printf(" Enter a%d%d:\n ",i+1,j+1);
fflush(stdin);
		fflush(stdout);
		scanf("%f",&A[i][j]);


	}
	}
// Entered  the elements of 2nd matrix

printf("Enter the elements of 2nd  matrix: \n ");
for (i=0;i<2;i++){
	for(j=0;j<2;j++){
printf(" Enter b%d%d :\n ",i+1,j+1);
fflush(stdin);
		fflush(stdout);
		scanf("%f",&B[i][j]);


	}
	}

// calculate sum
for (i=0;i<2;i++){
	for(j=0;j<2;j++){
Sum[i][j]=A[i][j]+B[i][j];


	}
	}

//Output of result
printf("Sum of matrix : \n ");
for (i=0;i<2;i++){
	for(j=0;j<2;j++){
  printf ("%.1f    ",Sum[i][j]);


	}
printf("\n ");
	}

	return 0;
}

