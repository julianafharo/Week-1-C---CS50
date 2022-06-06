#include <stdio.h>

int main () {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("#");
        }
        printf("\n");
    }
    
}

//Temos dois loops aninhados, onde o loop externo usa i para fazer tudo que contem 3 vezes, e o loop interno usa j , uma variável diferente, para fazer algo 3 vezes para cada um desses tempos. Em outras palavras, o loop externo imprime 3 linhas, terminando cada uma delas com uma nova linha, e o loop interno imprime 3 colunas, ou caracteres tipo #, sem uma nova linha.
