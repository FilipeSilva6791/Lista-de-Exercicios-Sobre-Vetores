/************************************************************************
5. Escrever um algoritmo que l� um vetor X[10] e o escreve. Substitua, a
seguir, todos os valores nulos de X por 1 e escreva novamente o vetor X.
************************************************************************/

#include<stdio.h>

int main ()
{
  

 int x[10] = {1,0,2,0,3,0,4,0,5};
 int i;

 printf("Valores do vetor X: \n");

 for (i=0; i<10; i++)    //exibindo o vetor X
   printf("%d ", x[i]);


 printf("\n\nSubstituindo os zeros por um: \n");


 for (i=0; i<10; i++)
    {
     if (x[i]==0)
            x[i]=1;   //Substituindo os zeros por um

     printf("%d ",x[i]); //exibindo o vetor com os valores j� trocados

    }
 printf("\n\n");

}
