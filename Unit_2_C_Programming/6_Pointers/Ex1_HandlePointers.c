/*
 * Ex1Pointers.c
 *
 *  Created on: 15 févr. 2024
 *      Author: anasb
 */

#include<stdio.h>


int main(){
int *ab,m;
m=29;
printf("Adress of m :%p \n",&m);
printf("Value of m: %d \n ",m);

printf("Now ab is assigned with adress of m \n");
ab=&m;

printf("Adress of ab :%p \n",ab);
printf("Value of ab: %d \n ",*ab);
printf("The value of m is  assigned  to 34 \n");
m=34;
printf("Adress of ab :%p \n",ab);
printf("Value of ab: %d \n ",*ab);
printf("The pointer variable ab is assigned with the value 7 now  \n");

*ab=7;
printf("Adress of m :%p \n",&m);
printf("Value of m: %d \n ",m);
	return 0;
}
