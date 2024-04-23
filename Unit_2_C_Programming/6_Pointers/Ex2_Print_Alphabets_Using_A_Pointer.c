/*
 * Ex2Pointers.c
 *
 *  Created on: 16 févr. 2024
 *      Author: anasb
 */


#include<stdio.h>


int main(){
 char tab[27],*p;
 int i;
p=tab;
 for(i=0;i<26;i++){
*p=i+'A';
p++;
 }
 p=tab;
printf("All alphabets are :\n ");
for(i=0;i<26;i++){
printf("%c ",*p);
p++;
}


	return 0;
}

