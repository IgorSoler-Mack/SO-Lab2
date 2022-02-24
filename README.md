# SO Lab 2
Lab 2 de Sistemas operacionais

## Grupo

Igor Soler Cavalcanti - 42013550

Paloma de Sousa Bezerra - 32094264

Rafael Miranda Ferreira - 42080932


## Como Executar o Código

Compile e Execute o arquivo main.c em seu compilador de escolha (GCC foi o Utilizado)

Possíveis comandos para compilar o programa

`make main.c`

`gcc .\main.c`

Possível comando para executar o programa após compilá-lo

`./main`

## Como utilizar o Programa

Estes programas recebem de argumentos de linha de comando. Desta forma, qualquer input do usuario é dado da sequinte forma ao executar o programa:

`./nome_executavel input`


## Lendo arquivo teste.txt disponível neste repositorio com o programa cat.c

Se o arquivo compilado cat estiver no mesmo diretório que teste.txt, o seguinte comando irá imprimi-lo

`./cat teste.txt` ou em Windows `./cat.exe teste.txt`

## Copiando o conteúdo de teste.txt para um novo arquivo com o programa cp.c

Se o arquivo compilado cp estiver no mesmo diretório que teste.txt, o seguinte comando irá copia-lo para um novo arquivo teste_copy.txt

`./cp teste.txt teste_copy.txt` ou em Windows `./cp.exe teste.txt teste_copy.txt`

# Perguntas

## 1- Como passar parametros pela linha de comando?

Utilizando o parametro `char *arg[]` em sua função `main()`

Desta forma, qualquer texto passado após a chamada da função em linha de código é interpretado como elemento deste vetor `arg`

## 2- Quantas funções utilizaram de Syscalls?

Funções utilizadas que utilizam de syscalls:
- **fputc**: Utiliza de syscalls para adicionar caracteres em um arquivo
- **fgetc**: Utiliza de syscalls para ler caracteres de um arquivo
- **fopen**: Utiliza de syscalls para abrir um arquivo
- **fclose**: Utiliza de syscalls para fechar um arquivo
- **exit**: Utiliza de syscalls para encerrar um processo
- **printf**: Utiliza de syscalls para imprimir multiplos caracteres no terminal

Total de chamadas de funções que utizam de (ou são) syscalls por programa:
- cp.c: 12 chamadas de funções
- cat.c: 7 chamadas de funções

