#include <stdio.h>

int torre = 5,bispo = 5, rainha = 8, i, j;

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
// Nível Novato - Movimentação das Peças

// Implementação de Movimentação do Bispo
   printf("\n_Movimento do Bispo_\n");
    i = 1;
    while (i <= bispo)
    {
        printf("%dº movimento pra cima à direita\n", i);
        i++;
    }

 // Implementação de Movimentação da Torre
    printf("\n_Movimentos da Torre_\n");
    for(i = 1; i <= torre; i++)
        {printf("%dº movimento para o lado direito\n",i);
    }
    printf("Torre se moveu %d vezes para o lado direito.\n",torre);

// Implementação de Movimentação da Rainha
    printf("\n_Movimento da Rainha_\n");
    i = 1;
    do
    {
        printf("%dº movimento para a esquerda\n",i);
        i++;
    } while (i <= rainha);
     printf("Rainha se moveu %d vezes para o lado direito.\n",rainha);

// Nível Aventureiro - Movimentação do Cavalo
    printf("\n_Movimento do Cavalo_\n");
    for(int i = 1; i <= 2 ;i++){
        printf("%dº movimento para baixo\n",i); 
        if(i==2){
        j =1;
        while(j<=1){
           printf("%dº movimento para a direita\n",j);
           j++;
        }
    }
}
 printf("Cavalo se moveu para baixo direita\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
