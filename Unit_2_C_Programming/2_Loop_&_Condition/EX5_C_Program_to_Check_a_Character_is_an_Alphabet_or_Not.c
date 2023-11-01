/*
 * ex5lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */





#include<stdio.h>
#include<stdlib.h>

int main(){
   char c;
	printf("##########Console-output###\n");
	printf("Enter a character  : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	if((c>=65 &&c<=90)||(c>=97 &&c<=122) ) printf("%c is an alphabet \n",c);
	else  printf("%c is not  an alphabet \n",c );
	printf("##########################\n");
	printf("########################################################################\n");
	return 0;
}

