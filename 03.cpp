#include <stdlib.h>
#include <stdio.h>

int main(){
int n1 , n2,x=99,y;
char c;
do{
    printf("Digite:\n 1 para somar\n 2 para subtrair\n 3 para multiplicar\n 4 para dividir \n 0 para parar as operacoes: ");
    scanf("%d",&x);//verificando o tipo de o peração desejada
    if(x==0){//caso for 0, cancela a calculadora, e já não pega os novos números para ser mais raápido
    printf("Voce cancelou as operacoes");
    break;
    }
    printf("Digite um numero para ser operado: ");
    scanf("%d",&n1);
    printf("Digite um numero para ser operado: ");
    scanf("%d",&n2); //pegando os 2 números
    if(x==1){ //verificando o tipo de operaçãao segundo o x
      y=n1+n2;
      printf("A soma desses numeros eh: %d\n",y);
    }else if(x==2){
        y=n1-n2;
        printf("A subtracao desses numeros eh: %d\n",y);
    }else if(x==3){
        y=n1*n2;
        printf("A multiplicacao desses numeros eh: %d\n",y);
    }else if(x==4){
        y=n1/n2;
        printf("A divisao  desses numeros eh: %d\n",y);
    }else{
        printf("Digite uma opção valida");
    }
    
}while(x!=0);//garantindo o loop até o usuário cancelar
scanf("%c",&c);
return(0);
}