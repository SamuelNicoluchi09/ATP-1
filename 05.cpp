#include<stdlib.h>
#include<stdio.h>

int main(){
    int x,anterior=0,atual,proximo=0;
char c;
printf("Digite o numero limete para a cadeia de fibonacci: ");
scanf("%d",&x);

do{
    if(anterior<1){// caso o númer0 anerior for menor que um, então já esccrevo os primieros 3 números da sequencia fibonacci
        printf("0\n1\n1\n");
        anterior=1;
        atual=1;
       
    }
    proximo=anterior+atual; //somando os dois ulltimos números da sequencia para formar o próximo termo.
    anterior=atual;// andando com o par que terei que somar, para continuar somaando, o atual vira o anterior para a proxima conta e o proximo vira o atual
    atual=proximo;
    printf("%d\n",atual);
   
}while(atual+anterior<x);//verifiando se o proximo número sera menor que o limite colocado pelo usuário
    return(0);
    scanf("%c",&c);
}