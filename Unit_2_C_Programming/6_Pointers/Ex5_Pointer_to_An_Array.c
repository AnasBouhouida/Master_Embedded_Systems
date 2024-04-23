/*
 * Ex5Pointers.c
 *
 *  Created on: 16 févr. 2024
 *      Author: anasb
 */
#include<stdio.h>
#include<String.h>
struct Person{
char *name;
int ID;
};
int main(){
struct Person p1={"Anas",2001},p2={"Ahmed",2002},p3={"Mohamed",2003};
struct Person (*A[])={&p1,&p2,&p3};
struct Person (*(*p)[3])=&A;

	printf("Pesrson name :%s \n",(**(*p+2)).name);
	printf("Pesrson ID :%d  \n",(**(*p+2)).ID);
	return 0;
}


