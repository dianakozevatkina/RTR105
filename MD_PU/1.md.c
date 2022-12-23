#include <stdio.h>

int main () {

long long int input1, input2, answer; 

printf ("400000 * 100000 = ?\n\nPlease enter first number: ");
scanf ("%lld", &input1);
printf ("Please enter second number: ");
scanf ("%lld", &input2);

answer = input1 * input2;
printf ("400000 * 100000 = %lld\n\n", answer);


return 0;
}
