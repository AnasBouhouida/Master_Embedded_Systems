/*
 * Ex2.c
 *
 *  Created on: 21 nov. 2023
 *      Author: anasb
 */
#include<stdio.h>
#include <stdlib.h>



int fact(int n){
	static int p=1;
p=p*n;
n--;
if(n>0)fact(n);
return p;


}




int main() {
	int n;
	printf("Enter an positive integer : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	printf(" Factoriel of %d = %d\n",n,fact(n));

	return 0;
}

