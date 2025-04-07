#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, x;

    printf("Digite o numero de linhas do triangulo: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= x - i; j++) {// colocandos os espaços em branco(quntidade de linhas menos o nº da linha), os espaços são colocados 
            printf(" ");              //laado esquerdo do triangulo, empurrando assim os asteríscos
        }        
        for (j = 1; j <= 2 * i - 1; j++) { //construindo a pirâmede(quantidade de asteriscos é a 2 vezes a linha menos 1)
            printf("*");
        }
        printf("\n");//indo para a proxima linha
    }
    return(0);
    getchar();
}