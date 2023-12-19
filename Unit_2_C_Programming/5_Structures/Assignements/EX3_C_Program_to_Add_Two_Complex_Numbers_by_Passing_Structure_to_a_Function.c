/*
 * Ex3.c
 *
 *  Created on: 17 déc. 2023
 *      Author: anasb
 */
#include "stdio.h"
#include "stdlib.h"

struct Complex{
	float real;
	float imag;

};
struct Complex  readComplex(){
 struct Complex  A;
printf("Enter real and imaginary respectively :\n");
fflush(stdin);
fflush(stdout);
scanf("%f%f",&A.real,&A.imag);

return A;
}
 void printComplex(struct Complex A){
printf("%.2f+%.2fi",A.real,A.imag);

 }
struct Complex sumComplex(struct Complex A,struct Complex B){
struct Complex Sum;
Sum.real=A.real+B.real;
Sum.imag=A.imag+B.imag;

return Sum;
}

int main(){
struct Complex A,B,S;
printf("For 1st complex number :\n");
A=readComplex();
printf("For 2nd complex number :\n");
B=readComplex();
S=sumComplex(A,B);
printf("Sum=");
printComplex(S);


	return 0;
}



