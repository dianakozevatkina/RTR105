// visas atbildes ir šeit
//https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2596.pdf

#include <stdio.h>

int main () {

// char c1 = 'A', c2 = 0x45;
// int i1 = 2000, i2 = 01056;
// float f1 = 2.3, f2 = -770.896;
// double d1 = -5.6e4, d2 = 456.8e-3;

// printf ("\n%d (%ld bytes)* %d (%ld bytes)",c1,sizeof(c1), i1,sizeof(i1));
// printf (" = %d (%ld bytes)\n\n", c1*i1, sizeof(c1*i1));

char c1 = 'F', c2 = 0x32, c3 = 'A';
int i1 = 4, i2 = 9, i3 = 034;
float f1 = 4.5, f2 = 6.2;


//% mod
//printf ("\n%d (%ld bytes) %% %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
//printf (" = %d (%ld bytes)\n\n", i1%i2, sizeof(i1%i2));
// būs 11
//

// &
printf ("\n%d (%ld bytes) & %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
printf (" += %d (%ld bytes)\n\n", i1&i2, sizeof(i1&i2));

// | OR 
printf ("\nOR operacijs: %d (%ld bytes) | %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
printf (" = %d (%ld bytes)\n\n", i1|i2, sizeof(i1|i2));

// ^ XOR copies the bit if it is set in one operand but not both. 
printf ("\n #XOR operacija: %d (%ld bytes) ^ %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
printf (" = %d (%ld bytes)\n\n", i1^i2, sizeof(i1^i2));

// || OR If any of the two operands is non-zero, then the condition becomes true.
printf ("\n%d (%ld bytes) || %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
printf (" = %d (%ld bytes)\n\n", i1||i2, sizeof(i1||i2));

// && AND both the operands are non-zero, then the condition becomes true.

printf ("\n%d (%ld bytes) && %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
printf (" = %d (%ld bytes)\n\n", i1&&i2, sizeof(i1&&i2));

// >
printf ("\n%f (%ld bytes) > %f (%ld bytes)", f1, sizeof(f1), f2, sizeof(f2));
printf (" = %d (%ld bytes)\n\n", f1>f2, sizeof(f1>f2));

// 

 return 0;
}
