/******************************************************************************
8. Elabore um programa que crie um vetor com 50 valores inteiros entre 1 e 100.
Pesquise, a seguir, o vetor e:
a) Encontre e escreva o maior valor e sua posi��o;
b) Encontre e escreva o menor valor e sua posi��o;
c) Calcule e escreva a m�dia aritm�tica dos valores lidos;
d) Escreva quantos s�o pares;
e) Escreva quantos s�o impares:
f) Exiba todos os n�meros primos;
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

  srand((unsigned)time(NULL)); //fun��o para gera��o de n�meros aleat�rios (semente -> rel�gio)

  printf("Nosso vetor de n�meros aleat�rios: \n");

  for (i=0; i<50; i++)
  {
    vetor[i]=rand()%100;  // atribuindo os n�meros aleat�rios (que est�o limitados de 0 a 100) ao vetor

    printf("%2d ", vetor[i]); //exibindo os valores do vetor

    if ((i+1)%10==0)   //pulando uma linha a cada 10 valores
        printf("\n");

    if (vetor[i]>maiorValor) //achando o maior valor e sua posi��o
    {
      maiorValor=vetor[i];
      posMaior=i;
    }

    if (vetor[i]<menorValor) //achando o menor valor e sua posi��o
    {
      menorValor=vetor[i];
      posMenor=i;
    }

    media+=vetor[i];   //somando os  50 valores

    if (vetor[i]%2==0)  //achando o n� de pares
     {
      pares++;
     }else{
      impares++; //achando o n� de impares
     }
  }

  printf("\nO maior valor � o %d na posi��o %d;\n",maiorValor,posMaior);
  printf("O menor valor � o %d na posi��o %d;\n",menorValor,posMenor);

  media/=50;

  printf("A m�dia dos valores �: %.2f; \n", media);
  printf("%d valores s�o pares; \n", pares);
  printf("%d valores s�o �mpares; \n", impares);
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
        return 0; //n�o � primo

    do{
        if (numero%div==0)
        x++;

        div++;
      } while (div<=numero);

    return x;

//Se X for igual a 1 o n�mero � primo
}

