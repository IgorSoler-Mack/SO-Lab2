#include <stdio.h>
#include <stdlib.h>


// Imprime o texto 
void print_file(FILE *arquivo){
   char c;
   c = fgetc(arquivo);
   while (c != EOF){
   		printf("%c", c);
      	c = fgetc(arquivo);
   }
}

int main (int numargs, char *arg[]) {
   FILE *arquivo;
   
   arquivo = fopen (arg[1], "r");
   
   if (arquivo == NULL) {
      printf ("\nNÃ£o encontrei o arquivo!\n");
      exit (EXIT_FAILURE);
   }
   
   print_file(arquivo);
   fclose (arquivo);
   return EXIT_SUCCESS;
}
