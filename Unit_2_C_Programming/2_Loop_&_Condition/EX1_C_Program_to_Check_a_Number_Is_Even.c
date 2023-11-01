/*
 * ex1Lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include<stdlib.h>

void main(){
	int A;
	printf("##########Console-output###\n");
	printf("Enter an integer you want to check : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&A);
	if(A%2==0) printf("%d is  even \n",A );
	else printf(" %d is  odd \n",A );
	printf("##########################\n");
	printf("########################################################################\n");


}
