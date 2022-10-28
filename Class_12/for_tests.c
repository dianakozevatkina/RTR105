// cikla for (; ;) iekavas vinemer ir divi ;; ; 
 // for ( ; izt ;) 
 // darbibas pirms for (.., ..., ..., ... ;  ; ) pirm; tiek izpildita tikai vienu reizi 
// darbibas var but vairakas - nodalitas ar komatu

// for (1.; 2.5.8.11 ; 4.7.10.) / darbibu izpildes seciba
// 3.6.9. //tikmer, kamer izteiksmes dala (starp ;;) neus false

#include <stdio.h>

int main () {

 char c;

 for (c=10; c>=0; c--)
// while (c)// c==0

 { 
 printf ("c = %d\n", c);
// c--; // c = c-1 ; c-=1; c+= -1; --c
 
// if (c == 5)
//  break;
 }

 printf ("izruka printf aiz cikla. \n");
 printf ("c= %d\n", c);

return 0;}
