/*
 * ArraysEx2.c
 *
 *  Created on: 7 nov. 2023
 *      Author: anasb
 */


#include <stdio.h>
#include <stdlib.h>

int main (){
	float A[100],sum=0;
	int i,n;

	printf("Enter the numbers of data :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++){
		printf("%d. Enter number : \n",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&A[i]);
		sum+=A[i];
	}
	printf("Average= %.1f",sum/n);
	return 0;
}
