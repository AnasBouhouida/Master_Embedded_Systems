/*
 * ex7.c
 *
 *  Created on: 22 oct. 2023
 *      Author: anasb
 */
#include<stdio.h>
#include<stdlib.h>

void main(){
float  A,B;
	printf("##########Console-output###\n");
	printf("Enter value of a: \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&A);
	printf("Enter value of b: \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&B);
	printf(" \n ");
	A=A+B;
	B=A-B;
	A=A-B;
	printf("After swapping, value of a = %f \n",A);
	printf("After swapping, value of b = %f \n",B);
	printf("##########################\n");
	printf("########################################################################\n");
}
