/*
 *
 ex4.c
 *
 *  Created on: 22 oct. 2023
 *      Author: anasb
 */
#include<stdio.h>
#include<stdlib.h>

void main(){

	float A ,B,p=1 ;
	printf("##########Console-output###\n");
	printf("\n ");
	printf("###########################\n");
	printf("Enter two numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&A,&B);
	p=A*B;
	printf("Product: %f \n",p);
	printf(" \n ");
	printf("########################################################################");
}


