//Programa criado por Marcela e Malu
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){ 
    if(strcomp(argv[1], "pt-br")) printf("Ola, %s\n", argv[0]);
    else printf("hello, %s!!\n", argv[0]);
    return 0;
}