#include <stdio.h>
#include <math.h>

int main () {
 float troco;

 printf(" Olá! Insira o valor do troco a receber: ");
 scanf("%f", &troco);
 while (troco<0){
     printf("Valor invalido, tente novamente!\n");
     return main();
 }
 int trococonvertido = round(troco * 100);
    int c25 = trococonvertido / 25;  
    int c10 = (trococonvertido - (c25 * 25)) / 10;  
    int c5 = (trococonvertido - (c25 * 25) - (c10 * 10)) / 5; 
    int c1 = trococonvertido - (c25 * 25) - (c10 * 10) - (c5 * 5); 
 
 printf("Quantidade de moedas %i\n",c25+c10+c5+c1);
 
}