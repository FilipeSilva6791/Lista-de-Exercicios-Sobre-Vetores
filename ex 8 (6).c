/******************************************************************************
8. Elabore um programa que crie um vetor com 50 valores inteiros entre 1 e 100.
Pesquise, a seguir, o vetor e:
a) Encontre e escreva o maior valor e sua posição;
b) Encontre e escreva o menor valor e sua posição;
c) Calcule e escreva a média aritmética dos valores lidos;
d) Escreva quantos são pares;
e) Escreva quantos são impares:
f) Exiba todos os números primos;
******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int primos (int);

int main ()
{
  setlocale(LC_ALL,"");

  int vetor[50];
  int maiorValor=0;
  int menorValor=100;
  int posMaior;
  int posMenor;
  float media=0;
  int pares=0;
  int impares=0;
  int i;

  srand((unsigned)time(NULL)); //função para geração de números aleatórios (semente -> relógio)

  printf("Nosso vetor de números aleatórios: \n");

  for (i=0; i<50; i++)
  {
    vetor[i]=rand()%100;  // atribuindo os números aleatórios (que estão limitados de 0 a 100) ao vetor

    printf("%2d ", vetor[i]); //exibindo os valores do vetor

    if ((i+1)%10==0)   //pulando uma linha a cada 10 valores
        printf("\n");

    if (vetor[i]>maiorValor) //achando o maior valor e sua posição
    {
      maiorValor=vetor[i];
      posMaior=i;
    }

    if (vetor[i]<menorValor) //achando o menor valor e sua posição
    {
      menorValor=vetor[i];
      posMenor=i;
    }

    media+=vetor[i];   //somando os  50 valores

    if (vetor[i]%2==0)  //achando o nº de pares
     {
      pares++;
     }else{
      impares++; //achando o nº de impares
     }
  }

  printf("\nO maior valor é o %d na posição %d;\n",maiorValor,posMaior);
  printf("O menor valor é o %d na posição %d;\n",menorValor,posMenor);

  media/=50;

  printf("A média dos valores é: %.2f; \n", media);
  printf("%d valores são pares; \n", pares);
  printf("%d valores são ímpares; \n", impares);
  printf("Valores primos: ");

  for (i=0; i<50; i++)
  {
    if(primos(vetor[i])==1)
    {
      printf("%d ",vetor[i]);
    }
  }

  printf("\n\n");

}

int primos (int numero)
{
    int x=0;
    int div=2;

    if (numero<2)
        return 0; //não é primo

    do{
        if (numero%div==0)
        x++;

        div++;
      } while (div<=numero);

    return x;

//Se X for igual a 1 o número é primo
}

