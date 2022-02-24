#include <stdio.h>
#include <stdlib.h>


// Imprime o texto 
void print_file(FILE *arquivo){
	// Imprime Char por Char do arquivo
 	int c;
   	c = fgetc(arquivo);
  	while(c != EOF){
    	printf("%c", c);
    	c = fgetc(arquivo);
  	}
}

int main (int numargs, char *arg[]) {
  	FILE *arquivo;
   
  	// L� arquivo utilizando o parametro de linha de c�digo
   	arquivo = fopen (arg[1], "r");
   
   	if (arquivo == NULL) {
      	printf ("\nNao encontrei o arquivo!\n");
      	exit (EXIT_FAILURE);
   	}
   
   	print_file(arquivo); // Fun��o que imprime o arquivo
   
   	fclose (arquivo); // Fecha o arquivo ap�s o uso
   	return EXIT_SUCCESS;
}
