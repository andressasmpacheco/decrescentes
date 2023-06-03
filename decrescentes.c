#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int i = 0;
    printf("Esse programa imprime os números pares decrescentes de um número que você escolheu: \n\n");
     printf("Digite um número:  \n\n");
     scanf("%d", &i);
    for (i % 2; i > 0; i--)
    {
        if (i%2)
        {
            printf("%d ",i);
            i = i -2;
        }
        else
        {
           printf("%d ",i);
            i = i -1; 
        }
        
    }
    
    
}
