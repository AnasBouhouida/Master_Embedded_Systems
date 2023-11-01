/*
 * ex4Lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */



#include<stdio.h>
#include<stdlib.h>

int main(){
   float A;
	printf("##########Console-output###\n");
	printf("Enter a number : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&A);
	if(A>0) printf("%f is positive \n",A );
	else if (A<0) printf(" %f is negative \n",A );
	else printf(" You entered zero" );
	printf("##########################\n");
	printf("########################################################################\n");
	return 0;
}

