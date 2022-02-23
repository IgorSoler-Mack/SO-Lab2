#include <stdio.h>
#include <stdlib.h>


// Imprime o texto 
void print_file(FILE *arquivo){
   const unsigned MAX_LENGTH = 256;
   char buffer[MAX_LENGTH];

   while (fgets(buffer, MAX_LENGTH, arquivo)){
       printf("%s", buffer);
   }
}

int main (int numargs, char *arg[]) {
   FILE *arquivo;
   
   arquivo = fopen (arg[1], "r");
   
   if (arquivo == NULL) {
      printf ("\nNão encontrei o arquivo!\n");
      exit (EXIT_FAILURE);
   }
   
   print_file(arquivo);
   fclose (arquivo);
   return EXIT_SUCCESS;
}
