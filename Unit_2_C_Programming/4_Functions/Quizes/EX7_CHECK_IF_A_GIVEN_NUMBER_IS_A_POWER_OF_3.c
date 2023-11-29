/*
 * Quize7.c
 *
 *  Created on: 26 nov. 2023
 *      Author: anasb
 */


#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<math.h>
int power (int nb){
float p;
p=log10(nb)/log10(3);
if(p-(int)p==0)
	return 0;
else return 1;
}
int main(){
int nb;
	printf("Enter your user name :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&nb);
	if(power(nb)==0) printf("%d is a power of 3 \n",nb);
	else printf("%d is not a power of 3 \n",nb);


	return 0;
}
