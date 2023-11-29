/*
 * Quize6.c
 *
 *  Created on: 26 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool LSB (int nb){

	return nb & (1<<3);
}



int main(){
	int  nb;
	printf("Enter a number  :\n");
	fflush(stdin);
	fflush(stdout);
scanf("%d",&nb);
printf("the 4th  significant  bit is : %d \n",LSB(nb));



	return 0;
}


