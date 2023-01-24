/**************************************************************
6. Faça um algoritmo que leia 10 valores e os escreva na ordem
contrária à que foram digitados.
**************************************************************/

#include<stdio.h>

int main ()
{
 int a[10];
 int i;

 printf ("Digite dez valores: \n");

 for (i=0; i<10; i++)
    {
       printf("Valor %2d: ",i+1);
       scanf("%d",&a[i]);

    }

 printf("\nValores escritos ao contrario da ordem informada: \n");

 for (i=9; i>=0; i--)
    printf("%d ",a[i]);

 printf("4\n");
}
