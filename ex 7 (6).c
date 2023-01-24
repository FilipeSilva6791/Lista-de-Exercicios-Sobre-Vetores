/**************************************************************************
7. Elabore um programa que lê valores inteiros para um vetor de 12 posições
e o escreva. Troque, a seguir, somente os números primos deste vetor pelo
valor “zero”. Escreva o vetor resultante.
**************************************************************************/


#include <stdio.h>
#include <locale.h>

int primos (int);

int main ()
{
  setlocale(LC_ALL,"");

  int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int i;

  printf("Este é nosso vetor: \n");

  for(i=0; i<12; i++)
     printf("%d ",a[i]);

  printf("\n\nDentre estes 12 valores, estes são primos: \n");


  for(i=0; i<12; i++)
    {
      if(primos(a[i])==2)   //identificando os primos
      {
        printf("%d ", a[i]); //exibindo os primos
        a[i]=0;              //trocando os primos por zero
      }
    }

   printf("\n\nSubstituindo estes valores por zero temos o seguinte vetor: \n ");

   for(i=0; i<12; i++)
    printf("%d ", a[i]);


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
}

