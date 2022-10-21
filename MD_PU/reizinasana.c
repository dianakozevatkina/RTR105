#include <stdio.h>

int main(){

unsigned long i1 = 400000;
unsigned long i2 = 100000;

printf ("\n%d (%ld bytes) * %d (%ld bytes)",i1,sizeof(i1), i2,sizeof(i2));
printf (" = %d (%ld bytes) \n\n", i1*i2, sizeof(i1*i2));


return 0;
}
