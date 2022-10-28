/* ciklu konstrukcija lau vairakas reizes pec kartas 
izpildit vienas un tas pasan koda 
rindas (alternativa programmetas manuali atkarto rindu)*/

// while - kamer
// do while - darit kamer
// for - darit lidz

//while (izteksme) viena darbiba; // tiek izpildita ja izteiksmes rezultats ir true
//while (izteksme)
 // viena darbiba
//while (izteksme){

//	pirma_darbiba; 
//	otra_darbiba;

//}

// true - 1 rezultata kaut viena bita 
// false - 0 visos rezultata bitos 

#include <stdio.h>

int main () {

 char c = 10;

 while (c>=0)
// while (c)// c==0

 { 
 printf ("c = %d\n", c);
// c--; // c = c-1 ; c-=1; c+= -1; --c
 c = c-1;
 
 if (c == 5)
  break;
 }

 printf ("izruka printf aiz cikla. \n");
 printf ("c= %d\n", c);

return 0;}
