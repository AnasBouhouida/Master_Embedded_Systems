/*

 * Ex3.c
 *
 *  Created on: 21 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>




char  *reverse(char *p,int j){

	static int i=0;

char temp;
temp=p[i];
p[i]=p[j];
p[j]=temp;
i++;
j--;
if(i<j) reverse (p,j);
return p;


}




int main() {
	char p[100];
	printf("Enter a sentence  : \n");
	fflush(stdin);
	fflush(stdout);
	gets(p);

	printf(" %s \n",reverse(p,strlen(p)-1));

	return 0;
}

