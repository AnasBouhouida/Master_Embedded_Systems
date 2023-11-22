/*
 * Ex4.c
 *
 *  Created on: 21 nov. 2023
 *      Author: anasb
 */






#include<stdio.h>
#include <stdlib.h>
#include <string.h>




int   power(int b,int p){

	static int f=1;

f=f*b;
p--;
if(p>0) power(b,p);
return f;
}




int main() {
	int b,p;
	printf("Enter base power  : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter power number   : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p);
	if(b==0 && p==0)
		printf("impossible  ");
	else if(b!=0 && p==0)
		printf("%d^%d=1 \n",b,p);

	else printf("%d^%d =%d \n",b,p,power(b,p));



	return 0;
}

