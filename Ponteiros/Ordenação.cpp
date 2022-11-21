/*Implementar um algoritmo bublesort para ordenar um vetor de 1 milhão de elementos. Faça o preenchimento de forma aleatória e compare o tempo de ordenação do mesmo algoritmo com 500 mil elementos aleatórios.*/
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int swap;
    int vetor[100000];

        for (i = 0; i < 100000; i++)
        {
            vetor[i] = rand() % 100;
        }

        
        for ( i = 0; i < 100000 - 1; i++)
        {
            for ( j = 0; j < 100000 - 1; j++)
            {
                if (vetor[j] > vetor[j + 1])
                {
                    swap = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = swap;
                }
                
            }
            
        }
        
        for (i = 0; i < 100000; i++)
        {
            vetor[i] = i;
        }
    return 0;
    
}