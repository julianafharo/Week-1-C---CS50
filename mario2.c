#include <stdio.h>

int main() {
    int altura;
    printf("Insira a altura(1 a 8): ");
    scanf("%d", &altura);
    while (altura>8||altura<0) {
        printf("Por favor, digite um numero de 1 a 8...");
        return main();
            } 
    for (int i = 0; i < altura; i++){
        for(int j = 0; j < altura; j++) {
            if(i+j < altura - 1){
              printf(" ");
            }   else{
                    printf("#");
                }  
        }     
            printf(" #");
            for(int j = 0; j < altura; j++) {
                if(i+j > altura -1) {
                    printf("#");
                }
            }printf("\n");
    } 
} 