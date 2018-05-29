#include <stdlib.h>
#include <stdio.h>


float tc, tf;


main (){
 
 printf("Sistema de conversao de graus celsius para fahrenheit")
 printf("entre com a temperatura em graus celsius\n");
 scanf("%f", &tc);
 
 
 tf = (9 * tc + 160) / 5;
 
 printf("a temperatura em graus fahrenheit e %f\n", tf);
 
 
 
 }
