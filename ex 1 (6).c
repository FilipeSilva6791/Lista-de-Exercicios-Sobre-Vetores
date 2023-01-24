/*********************************************************************
1. Elabore um programa que l� valores para um vetor de 17 posi��es e o
escreve. Escreve, a seguir, somente os n�meros primos deste vetor.
**********************************************************************/

#include<stdio.h>
#include<locale.h>

int primos (int);

int main ()
{
 setlocale(LC_ALL,"");

 int vetor[17];
 int i;
 int x=0; //quantidade de valores primos presentes  no vetor

 printf("Digite 17 valores, dando 'enter' entre eles: \n");

 for(i=0;i<17;i++) //la�o para leitura dos 17 valores
 {
    printf("Valor %d: ",i+1);
    scanf("%d", &vetor[i]);
 }

 printf ("\nOs valores digitados foram: \n");

 for(i=0;i<17;i++) //la�o para exibi��o de cada valor colocado no vetor
 {
     printf("%d ", vetor[i]);
 }

 for(i=0;i<17;i++) // la�o para  definir se h� e quantos primos existem no vetor
 {
    if (primos(vetor[i])==2)
    x++;
 }

 if(x>0) //se existir primos...
 {
     printf("\n\nDentre estes 17 valores, %d s�o primos, e estes s�o:\n",x);

     for(i=0;i<17;i++)//la�o para exibir os n�meros primos presentes no vetor
     {
       if(primos(vetor[i])==2)
       {
        printf("valor %d: %d\n",i+1,vetor[i]);
       }
     }
 }
 else //se n�o existir primos
 {
      printf("\n\nDentre estes 17 valores, nenhum � primo.\n\n");
 }
}

int primos (int num)
{
   int x=0;
   int div=1;

    do{
        if (num%div==0) {x++;}
        div++;
    } while (div<=num);

    return (x);
    //se x for igual 2 o n�mero � primo, pois um n�mero primo s� ser� divisivel por 1 e ele mesmo.

}
