#include <stdio.h>

int main () {

long long int input1, input2, answer;

printf ("Please enter first number: ");
scanf ("%lld", &input1);
printf ("* \nPlease enter second number: ");
scanf ("%lld", &input2);

answer = input1 * input2;
printf ("Result = %lld\n\n", answer);


return 0;
}
