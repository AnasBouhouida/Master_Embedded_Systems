/*
 * Ex6.c
 *
 *  Created on: 17 déc. 2023
 *      Author: anasb
 */

#include <stdio.h>


union U_job
{
	char name [32] ;
	float salary;
	int worker_no;

} U_union;

struct S_job
{
	char name [32];
	float salary;
	int worker_no;

} S_structure;


int main ()
{
	printf ("Size of the union is: %d", sizeof (U_union));
	printf ("\nSize of the structure is: %d", sizeof (S_structure));

	return 0;
}
