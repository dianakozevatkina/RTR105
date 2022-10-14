#include <stdio.h>


int main ()
 {
  //nedrikst izmantot mainigos pirm deklaresanas

  char a; //mainiga ar identifikatoru (nosaukumu) "a" deklaresana
  // ar identifikatoru a viennozomigi tiek sasaistits kads atminas apgabals - 
  // - kur (vieta) un cik (izmers)? 
  // cik? -  1 byte, jo ir char
  //komentars par vardu vai identifikatoru - driks saturet apaksvitru(_), 
  //burtus (ir starpiba ar lieliem un mazajiem burtiem a nav A), ciparus, bet nedrikst sakties ar cipariem var but mnemonisks, 
  //peim . cilindra  tilpums 
  //


  printf ("a mainiga vertiba (ka simbols) uzreiz pec deklaresanas: %c \n", a) ;
  printf ("a mainiga vertiba (ka dec sk) uzreiz pec deklaresanas: %d%c \n", a, 10) ; //10 LF ascii kursora parcelsana jauna rinda 
  printf ("a mainiga vertiba (ka hex sk) uzreiz pec deklaresanas: %#x \n", a) ;
  printf ("a mainiga vertiba (ka oct sk) uzreiz pec deklaresanas: %o \n\n", a);
  //; ; ; ; ; ; ; ;  // daudzi tuksie operatori

 //int a    //nedriks (shADI) pardeklaret mainigo

  a =  89; // "=" - pieskirsana operacija
	  // pa kreisi ir 89 ta ir  atbilstosi noformejuma (pierakstam) ta ir 
  	// ta ir int (4 bytes) tipa konstante pierakstita izmnatojot dec skaitl sistemu => 89 = 64(2^6) + 16(2^4)+ 8(2^3)+ 1(2^0) 
	//0000 0000  0000 0000  0000 0000  0101 1001
	 // a = 89; -> mainiga a 1 baita tike ierakstits 0101 1001


  printf ("a mainiga vertiba (ka simbols) pec pieskiersanas: %c \n", a) ;
  printf ("a mainiga vertiba (ka dec sk) pec pieskiersanas: %d \n", a) ; //10 LF ascii kursora parcelsana jauna rinda 
  printf ("a mainiga vertiba (ka hex sk) pec pieskiersanas: %#x \n", a) ;
  printf ("a mainiga vertiba (ka oct sk) pec pieskiersanas: %#o \n", a) ;

  a = 0x4c;
  printf ("a mainiga vertiba (ka simbols) pec pieskiersanas: %c \n", a) ;
  printf ("a mainiga vertiba (ka dec sk) pec pieskiersanas: %d\n", a) ; //10 LF ascii kursora parcelsana jauna rinda 
  printf ("a mainiga vertiba (ka hex sk) pec pieskiersanas: %#x \n", a) ;
  printf ("a mainiga vertiba (ka oct sk) pec pieskiersanas: %#o \n", a) ;

  a = 160;
 // char nozime signed char => -128..0..127
 //160 DEC -> 128(2^7)+ 32 (2^5)-> 0000 0000 0000 0000 0000 0000 1010 0000
 // musu (ieksa a ) riciba ir (1)010 0000 => ir "-" zime => nakamie biti pa tieso uzreiz netiek parveidoti par DEC
// (1)010 0000
// 101 1111 - zimes gadijuma atlikusos bitos inverte un +pieskaita 1  (binaro vieninieku)
//  +     1
//110  0000 - un tikai tagad rekina dec ska - 1*2^6 + 1*2^5 =96
  printf ("a mainiga vertiba (ka simbols) pec pieskiersanas: %c \n", a) ;
  printf ("a mainiga vertiba (ka dec sk) pec pieskiersanas: %d\n", a) ; //10 LF ascii kursora parcelsana jauna rinda 
  printf ("a mainiga vertiba (ka hex sk) pec pieskiersanas: %#x \n", a) ;
  printf ("a mainiga vertiba (ka oct sk) pec pieskiersanas: %#o \n", a) ;
a=340 

//printf *4


char b =93; //definesana  - deklaresana uzreiz ar pieskirsanu 
            // prioritara (tiks izpildita pirma) darbiba seit it deklaresana
	//

  return 0;

 }
