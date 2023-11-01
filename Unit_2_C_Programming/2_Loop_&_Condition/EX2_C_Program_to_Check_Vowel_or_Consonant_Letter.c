/*
 * ex2LAb2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */


#include<stdio.h>
#include<stdlib.h>

int main(){
   char  c;
	printf("##########Console-output###\n");
	printf("Enter an alphabet : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a'|| c=='i'|| c=='e'|| c=='o'||c=='A'|| c=='I'|| c=='E'|| c=='O') printf("%c is  a vowel \n",c );
	else printf(" %c is a consonant \n",c );
	printf("##########################\n");
	printf("########################################################################\n");
	return 0;
}

