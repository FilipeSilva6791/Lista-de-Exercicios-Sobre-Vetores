/************************************************************************
3. Elabore um programa que lê 30 valores inteiros para um vetor. Encontre
 o menor e o maior valor deste vetor, exibindo-os com a sua posição.
************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL,"");

  int a[30] = {1,2,3,4,5,6,7,8,9,10,30,29,28,27,26,25,24,23,22,21,20,11,12,13,14,15,16,17,18,19};
  int menor = 30;
  int maior = 0;
  int posicaoMaior;
  int posicaoMenor;
  int i;

    for(i=0; i<30; i++ )
    {
      if (maior< a[i])
      {
        maior= a[i];
        posicaoMaior=i;
      }

      if (a[i]<menor)
      {
        menor= a[i];
        posicaoMenor=i;
      }
    }

  printf("Valores presentes no vetor 'a' de 30 posições: \n\n");

  for (i=0;i<30;i++)
  {
      printf("%2d ",a[i]);

      if((i+1)%10==0)
        printf("\n");
  }

  printf("\nDentre estes trinta valores o maior deles é o a[%d]=%d\n", posicaoMaior,maior);
  printf("e o menor valor é o a[%d]=%d.\n\n",posicaoMenor,menor);
}
