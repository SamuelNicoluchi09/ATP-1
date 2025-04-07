#include <stdlib.h>
#include <stdio.h>

int main(){
int x , fatorial=1;
char c;
printf("Digite um numero para ver seu fatorial:\n");
scanf("%d",&x);
do{
    fatorial*=x;//calculando o fatorial
    x--;   //diminuindo um do número para a proxima operação  
}while(x>0);
printf("O fatotial do numero digitado, eh: %d",fatorial);
scanf("%c",&c);
return(0);
}