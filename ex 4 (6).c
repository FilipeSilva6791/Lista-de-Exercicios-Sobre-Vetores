/*********************************************************
4. Escreva um algoritmo que lê um vetor A[10] e exiba a
posição de cada elemento que for igual a 10.
*********************************************************/

#include<stdio.h>

int main ()
{
  int a[10] = {1,10,2,10,3,10,4,10,5,10};
  int i;

  printf ("Vetor a[10] = ");

  for(i=0;i<10;i++)
    printf("%d ",a[i]);

  printf("\nO vetor possui o valor 10 nas posicoes ");

  for(i=0;i<10;i++)
  {
   if (a[i]==10)
    {
      printf("%d ",i+1);
    }
  }




}
