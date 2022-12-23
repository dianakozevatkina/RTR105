 // norades un masivi

#include <stdio.h>

int main(){

int i_value = 8563;
printf ("i_value (variable name used) = %d\n", i_value);
printf ("size of i_value = %ld (byte)\n", sizeof(i_value)); //size depends on data type

int *i_pointer = &i_value; // norade i_pointer (tas ari mainigais)
			   // satures mainiga i_value adresi

printf ("address of i_value (value_off i_pointer)  = %p\n", i_pointer);
printf ("size of i_pointer = %ld (byte)\n", sizeof(i_pointer)); //size depends on data type
// nowadays 64 bit architecture -> 8bytes
// 0x7fffff18804c -6 bytes ||| 0x00007fffff18804c 8 bytes 
// 2^64 -> 


printf ("i_value (address used) = %d\n", *i_pointer);

*i_pointer = (*i_pointer) + 10;
printf ("i_value (variable name used; after change) = %d\n\n", i_value);


////////////////////

double d_value = 1.25e-2;
printf ("d_value (variable name used) = %f\n", d_value);
printf ("size of d_value = %ld (byte)\n", sizeof(d_value)); //size depends on data type

double *d_pointer = &d_value; // norade i_pointer (tas ari mainigais)

printf ("address of d_value (value_off d_pointer)  = %p\n", d_pointer);
printf ("size of d_pointer = %ld (byte)\n", sizeof(d_pointer)); //size depends on data type
printf ("d_value (address used) = %f\n", *d_pointer);










return 0;
}
