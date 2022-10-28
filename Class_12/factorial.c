// 5! = 5*4*3*2*1 = 1*2*3*4*5 = 4! *5
// 5! / 5 = 4!

//!0 = 1 // nulle ir tuksa kopa [] - jautajums 0! - cik 
// kopas var uztaisit no tuksas kopas - vienu  tukso kopu
 

#include <stdio.h>

int main(){

 int i, n, fact;
 printf ("cien. lietitajs ludzu ievadi vienu naturalo skaitli: ");
 scanf ("%d", &n);

 for (i =1, fact =1; i<=n; i++){
 fact = fact * i; // fact *= i;
 printf ("%3d! = %12d\n", i, fact);
}

return 0;

}
