#include <stdio.h>
#include <stdlib.h>


int main (int numargs, char *arg[]) {
   FILE *arquivoOrigem;
   FILE *arquivoDestino;
   
   arquivoOrigem = fopen (arg[1], "r");
   
   if (arquivoOrigem == NULL) {
      printf ("\nArquivo para ser copiado não encontrado!\n");
      exit (EXIT_FAILURE);
   }
   //Cria um arquivo caso não exista nenhum com o nome
   arquivoDestino = fopen(arg[2], "w");
   if (arquivoDestino == NULL) {
      printf("\n Não foi possível criar/abrir o arquivo de destino!\n");
      fclose(arquivoOrigem);
      exit (EXIT_FAILURE);
   }

   int c;
   c = fgetc(arquivoOrigem);
   while (c != EOF){
      fputc(c,arquivoDestino);
      c = fgetc(arquivoOrigem);
   }

   fclose (arquivoOrigem);
   fclose(arquivoDestino);
   return EXIT_SUCCESS;
}
