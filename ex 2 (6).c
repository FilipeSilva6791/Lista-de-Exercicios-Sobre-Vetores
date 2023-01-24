/**********************************************************************************
2. Elabore um programa para ler valores para dois vetores, a[8] e b[8]. Transfira,
a seguir, os valores lidos para um vetor c[16]. Exiba o vetor resultante, em um
formato de 4 colunas por linha
**********************************************************************************/

#include<stdio.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"");

 int a[8] = {1,2,3,4,5,6,7,8};
 int b[8] = {9,10,11,12,13,14,15,16};
 int c[16] = {0};
 int i;

 for (i=0; i<8; i++) //atribuindo os valores do vetor 'a' para o vetor 'c'
    c[i]=a[i];

 for (i=8; i<16; i++)//atribuindo os valores do vetor 'b' para os espaços restantes do vetor 'c'
    c[i]=b[(i-8)];
//           |
//            ------> corrigindo a posição do vetor para poder usar a mesma variável 'i'

 for (i=0;i<16;i++) // imprimindo os 16 valores
   {
    printf("%2d ",c[i]);

    if((i+1)%4==0)       //quebra de linha a cada 4 valores impressos
        {printf("\n");}
   }


}
