/*********************************************************************
1. Elabore um programa que lê valores para um vetor de 17 posições e o
escreve. Escreve, a seguir, somente os números primos deste vetor.
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

 for(i=0;i<17;i++) //laço para leitura dos 17 valores
 {
    printf("Valor %d: ",i+1);
    scanf("%d", &vetor[i]);
 }

 printf ("\nOs valores digitados foram: \n");

 for(i=0;i<17;i++) //laço para exibição de cada valor colocado no vetor
 {
     printf("%d ", vetor[i]);
 }

 for(i=0;i<17;i++) // laço para  definir se há e quantos primos existem no vetor
 {
    if (primos(vetor[i])==2)
    x++;
 }

 if(x>0) //se existir primos...
 {
     printf("\n\nDentre estes 17 valores, %d são primos, e estes são:\n",x);

     for(i=0;i<17;i++)//laço para exibir os números primos presentes no vetor
     {
       if(primos(vetor[i])==2)
       {
        printf("valor %d: %d\n",i+1,vetor[i]);
       }
     }
 }
 else //se não existir primos
 {
      printf("\n\nDentre estes 17 valores, nenhum é primo.\n\n");
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
    //se x for igual 2 o número é primo, pois um número primo só será divisivel por 1 e ele mesmo.

}
