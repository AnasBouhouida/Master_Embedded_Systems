/*
 * ArraysEx3.c
 *
 *  Created on: 7 nov. 2023
 *      Author: anasb
 */

/*
 * ArraysEx1.c
 *
 *  Created on: 7 nov. 2023
 *      Author: anasb
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
	float A[100][100],T[100][100];
	int i,j,n,m;

	printf("Enter rows and column of matrix : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&n,&m);

	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" Enter a%d%d:\n ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&A[i][j]);


		}
	}
	printf("Entred matrix : \n ");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf ("%.1f    ",A[i][j]);
		}
		printf("\n ");
	}





	for (i=0;i<n;i++){
		for(j=0;j<m;j++) T[i][j]=A[j][i];

	}

	//Output of result
	printf("transpose of matrix : \n ");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf ("%.1f    ",T[i][j]);


		}
		printf("\n ");
	}

	return 0;
}


