#include <stdio.h>

 // Tema 3 - Desafio Xadrez
 // Aluno Kauã de Sousa Ferreira
 // Nível Novato

int main() {

 // Declaração das variáveis Torre e Bispo
 int i_T = 1, i_R, i_B = 1;
 
    // Início do loop do Bispo
    printf("Movimento do Bispo\n");
    do {printf("Cima, Direita\n");
        i_B++; }
    
    while (i_B <= 5); 
         

printf("\n");

    // Início do loop da Torre
    printf("Movimento da Torre\n");
    while (i_T <= 5) {
        printf("Direita\n");
        i_T++; }


printf("\n");

   // Início do loop da Rainha
   printf("Movimento da Rainha\n");
   for (i_R = 1; i_R <= 8; i_R++) {
    printf("Esquerda\n"); }
    




return 0;
}