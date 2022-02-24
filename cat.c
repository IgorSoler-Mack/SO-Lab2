#include <stdio.h>
#include <stdlib.h>


// Imprime o texto 
void print_file(FILE *arquivo){
   char c;
   c = fgetc(arquivo); // <-- System Call (Lê um char de um arquivo)
   while (c != EOF){
   		printf("%c", c); // <-- Possível System Call (Imprime uma mensagem no terminal, existem casos em que printf é implementado com a syscall write)
      	c = fgetc(arquivo); // <-- System Call (Lê um char de um arquivo)
   }
}

int main (int numargs, char *arg[]) {
   FILE *arquivo;
   
   arquivo = fopen (arg[1], "r"); // <-- System Call (Abre um arquivo do seu Computador)
   
   if (arquivo == NULL) {
      printf ("\nNao encontrei o arquivo!\n"); // <-- Possível System Call (Imprime uma mensagem no terminal, existem casos em que printf é implementado com a syscall write)
      exit (EXIT_FAILURE);
   }
   
   print_file(arquivo);
   fclose (arquivo); // <-- System Call  (Fecha o arquivo previamente aberto)
   return EXIT_SUCCESS;
}

// Total de System Calls 6
