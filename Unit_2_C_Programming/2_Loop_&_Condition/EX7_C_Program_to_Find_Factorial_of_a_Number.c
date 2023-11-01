/*
 * ex7Lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */


#include<stdio.h>
#include<stdlib.h>

int main(){
	int  A,i,fact=1;
	printf("##########Console-output###\n");
	printf("Enter a an integer  : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&A);

	if(A<0)  printf(" Error  !! factoriel of negative number dosen't exist \n ");
	else if(A==0) printf ("Factoriel = %d \n",fact);
	else {
		for(i=1;i<=A;i++) fact=fact*i;
		printf("fact = %d \n",fact);
	}

	printf("########################################################################\n");
	return 0;
}
