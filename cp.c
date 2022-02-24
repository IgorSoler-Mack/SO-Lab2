#include <stdio.h>
#include <stdlib.h>


int main (int numargs, char *arg[]) {
   FILE *arquivoOrigem;
   FILE *arquivoDestino;
   
   arquivoOrigem = fopen (arg[1], "r"); // <-- System Call  (Abre um arquivo)
   
   if (arquivoOrigem == NULL) {
      printf ("\nArquivo para ser copiado nao encontrado!\n"); // <-- Possível System Call (Imprime uma mensagem no terminal, existem casos em que printf é implementado com a syscall write)
      exit (EXIT_FAILURE);   // <-- System Call  (Finaliza o Processo)
   }
   //Cria um arquivo caso não exista nenhum com o nome
   arquivoDestino = fopen(arg[2], "w"); // <-- System Call  (Abre um arquivo)
   if (arquivoDestino == NULL) {
      printf("\nNao foi possivel criar/abrir o arquivo de destino!\n"); // <-- Possível System Call (Imprime uma mensagem no terminal, existem casos em que printf é implementado com a syscall write)
      fclose(arquivoOrigem);    // <-- System Call  (Fecha o arquivo previamente aberto)
      exit (EXIT_FAILURE);      // <-- System Call  (Finaliza o Processo)
   }

   int c;
   c = fgetc(arquivoOrigem);    // <-- System Call (Lê um char de um arquivo)
   while (c != EOF){
      fputc(c,arquivoDestino);  // <-- System Call (Escreve o caractere c no arquivo de destino)
      c = fgetc(arquivoOrigem); // <-- System Call (Lê um char de um arquivo)
   }

   fclose(arquivoOrigem);  //  <-- System Call  (Fecha o arquivo previamente aberto)
   fclose(arquivoDestino); //  <-- System Call  (Fecha o arquivo previamente aberto)
   return EXIT_SUCCESS;
}

// Total de System Calls 12
