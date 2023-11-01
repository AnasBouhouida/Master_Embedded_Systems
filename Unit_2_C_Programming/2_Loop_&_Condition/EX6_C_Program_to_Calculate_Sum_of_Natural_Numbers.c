/*
 * ex6Lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int  A,i,sum=0;
	printf("##########Console-output###\n");
	printf("Enter a an integer  : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&A);
	if(A==1) sum=1;
	else{
		for(i=1;i<=A;i++) sum=sum+i;

	}
	printf("sum = %d \n",sum);
	printf("########################################################################\n");
	return 0;
}
