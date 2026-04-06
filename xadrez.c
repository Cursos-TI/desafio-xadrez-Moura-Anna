#include <stdio.h>

int torre = 5,bispo = 5, rainha = 8, i, j;

// Desafio de Xadrez - MateCheck

// Nível Mestre - Funções Recursivas e Loops Aninhados
//movimento do bispo utilizando Recursividade e loop aninhado
void moverbispo(int casas){
    if(casas > 0) {
        moverbispo(casas - 1);
         if (casas > 0) {
        for (int i = 0; i < 1; i++) {
            printf("Cima e ");
        }
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
        }
    }
}
       
//movimento da torre utilizando Recursividade 
 void movertorre(int casas){
    if (casas > 0){
        movertorre(casas - 1);
        printf("%dº movimento para o lado direito\n",casas);
    }
 }

//movimento da rainha utilizando Recursividade 
void moverrainha(int casas){
    if (casas > 0){
        moverrainha(casas -1);
        printf("%dº movimento para a esquerda\n",casas);
    }
}

int main() {
// Nível Novato - Movimentação das Peças

// Implementação de Movimentação do Bispo
/*  
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
 printf("Cavalo se moveu para baixo direita\n");*/
 //movimento do cavalo utilizando loop complexo
 printf("\n_Movimento do Bispo_\n");
    moverbispo(bispo);
     printf("%dº movimentos pra cima à direita (Diagonal)\n",bispo);

    
    printf("\n_Movimentos da Torre_\n");
    movertorre(torre);

    printf("\n_Movimento da Rainha_\n");
    moverrainha(rainha);
   
     printf("\n_Movimento do Cavalo_\n");
    for (int i = 0; i < 2 + 1; i++) {
        if (i < 2) {
            printf("Baixo\n");
            continue;
        }
        if (i = 1) {
            printf("Direita\n");
            printf("%d Movimento do Cavalo para baixo e à direita (L)\n",i);
            break;
        }
    }
    return 0;
}
