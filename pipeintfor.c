#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
int fd[2];
pid_t pid;

/* Verifica se ocorreu erro (-1) ao criar o PIPE */
if(pipe(fd) == -1){
    perror("pipe");
    exit(1);
}

/* Verifica se o fork foi realizado com sucesso > 0 */
if((pid = fork()) < 0){
    perror("fork");
    exit(1);
}

if(pid > 0){

    printf("-----------------------------------------------\n");
    printf("                PROCESSO PAI                   \n");
    printf("-----------------------------------------------\n");

    /* Como vamos ESCREVER do lado do PAI, fechamos a LEITURA */
    close(fd[0]);

    int numeros[5];

    for (int i = 0; i < 5; i++){
        printf("\nDigite o numero [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    /* Escrevendo o array no PIPE */
    write(fd[1], numeros, sizeof(numeros) + 1);
    printf("\nEnviando numeros para meu Filho...\n");
    exit(0);

}else
    {

        int numeros_recebidos[1];

        /* Como vamos LER do lado do FILHO, fechamos a ESCRITA*/
        close(fd[1]);

        /* Lendo a mensagem que foi enviada pelo FILHO */
        read(fd[0], numeros_recebidos, sizeof(numeros_recebidos));
        printf("\nNumeros Recebidos, Ordenando...\n");


        for(int i = 0; i<5; i++){
        printf("%d \n", numeros_recebidos[i]);
    }
}

return 0;
}
