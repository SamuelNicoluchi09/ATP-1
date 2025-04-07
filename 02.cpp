#include <stdlib.h>
#include <stdio.h>
int main(){
    int x;
    bool primo=true;
    printf("Digite um numero para ver se eh primo ou nao: \n");
    scanf("%d",&x);
    if(x<=1){ //1 e 0 não sao primos e negativos não são primos também
        primo=false;
    } 
    for(int i=2;i<x;i++){//contagem começa no 2, pois sse for um ou 0 não é primo.
        if(x%i==0){//caso o número for ddivisivel por qualquer outro número logo, não é primo
            
            primo=false; //portanto atribui-se falso
            break; // jáa para o loop pois sei já não será primo
        }
    }
    if(primo==true){//verifiação para printar se é primo ou não de aacordo com a variaavel primo
        printf("%d eh primo",x);
    }else{
        printf("%d nao eh primo",x);
    }
    scanf("%c");
    return(0);
   
}