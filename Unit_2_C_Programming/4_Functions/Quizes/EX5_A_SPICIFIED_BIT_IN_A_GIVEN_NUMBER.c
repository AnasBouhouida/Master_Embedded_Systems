/*
 * Quize2.c
 *
 *  Created on: 23 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>

int clearBit(int nb,int p){
nb= nb & ~(1<<p);

return nb;


}


int main(){
int nb,p;

	printf("Input number =   :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&nb);

		printf("bit position =   :\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&p);
        printf("result = %d \n",clearBit(nb,p));



	return 0;
}
