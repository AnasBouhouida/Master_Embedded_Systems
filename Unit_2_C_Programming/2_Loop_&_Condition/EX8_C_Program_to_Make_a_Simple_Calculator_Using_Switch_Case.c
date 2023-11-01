/*
 * ex8Lab1.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */




#include<stdio.h>
#include<stdlib.h>

int main(){
	char  c;
	float A,B,res=0;
	printf("##########Console-output###\n");
	printf("Enter operator either + or - or * or / :  \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	switch(c){

	case '+' : printf("Enter two operands : \n");
	           fflush(stdin);
            	fflush(stdout);
	            scanf("%f%f",&A,&B);
	            res=A+B;
	            printf(" %f-%f=%f \n",A,B ,res);
	            break;
	case '-' : printf("Enter two operands : \n");
		           fflush(stdin);
	            	fflush(stdout);
		            scanf("%f%f",&A,&B);
		            res=A-B;
		            printf(" %f-%f=%f \n ",A,B,res);
		            break;
	case '*' : printf("Enter two operands : \n");
		           fflush(stdin);
	            	fflush(stdout);
		            scanf("%f%f",&A,&B);
		            res=A*B;
		            printf(" %f*%f=%f \n ",A,B,res);
		            break;
	case '/' : printf("Enter two operands : \n");
		           fflush(stdin);
	            	fflush(stdout);
		            scanf("%f%f",&A,&B);
		            res=A/B;
		            printf(" %f/%f=%f \n ",A,B,res);
		            break;
default: printf("Error !!! \n");
	}

	printf("########################################################################\n");
	return 0;
}
