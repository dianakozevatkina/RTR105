//nosacijuma operator if tiek izmantots koda izpildes sazarosanasi 
// ar {} apzime darbibu bloku
// ; neko nedara bet laiku tere


#include<stdio.h>

int main (){

int a,b;
printf ("Enter 2 numbers: " );
scanf ("%d", &a);
scanf ("\n%d", &b);

if (a>b){

printf ("\nA ir liekaks par B");

}else {
printf ("\nA nav lielaks par B");
if (a==b){
printf ("\nA ir vienads ar b");
}else {
printf ("\nA ir mazaks par b");
}
}




return 0;

}
