#include <stdio.h>

int main () {

	int number;

	printf ("Enter number: ");
	if (scanf ("%d", &number))
	 printf ("\n%d is an integer", number);
	else
	 printf ("is NAN\n");

	return 0;
}
