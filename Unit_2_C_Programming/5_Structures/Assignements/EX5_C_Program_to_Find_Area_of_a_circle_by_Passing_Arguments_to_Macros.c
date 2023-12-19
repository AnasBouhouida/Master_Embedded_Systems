/*
 * Ex5.c
 *
 *  Created on: 17 déc. 2023
 *      Author: anasb
 */

#include <stdio.h>
#define PI 3.14159

float areaCirlce (float radius)
{
	return (PI * radius * radius);
}

int main()
{
	float radius ;

	printf ("Enter the radius of the circle: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f", &radius);

	printf ("The Area of the circle is: %.2f", areaCirlce (radius));

	return 0;
}



