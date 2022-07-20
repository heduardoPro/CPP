/*USUARIO DETERMINA O TAMANHO DO VETOR, DEPOIS O VETOR E PREENCHIDO COM VALORES QUE O USUARIO DIGITAR E EM SEGUIDA VAI IMPRIMIR OS ELEMENTOS DE ACORDO COM A POSIÇÃO*/

#include <iostream>
using namespace std;

int main()
{
    int TAM;
        cout << "\n Diite o tamanho do vetor que voce deseja:";
        cin >> TAM;
    int* VET = new int[TAM];
        for (int i = 0; i < TAM; i++)
        {
            cout << "\n preencha a posiacao " << i << "do vetor:";
            cin >> VET[i];
        }
        for (int i = 0; i < TAM; i++)
        {
            cout << VET[i];
        }
        
}