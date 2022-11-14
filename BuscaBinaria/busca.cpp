#include <iostream>

using namespace std;

int BuscaBinaria(int *vet, int chave, int inicio, int fim);

int main()
{
    int num, opcao;
    int vet[10] = {3, 5, 2, 1, 8, 13, 40, 98, 31, 0};

        for (int i = 0; i < 10; i++)
        {
            cout << vet[i] << " ";
        }
        
 
    do
    {
        cout << "\nDigite o numero que voce deseja procurar... ";
        cin >> num;
        cout << "Resultado: " << BuscaBinaria(vet, num, 0, 9);

        cout << "\n0 - SAIR\n1 - NOVA BUSCA\n";
        cin >> opcao;
    } while (opcao != 0);
    
        
    return 0;
}

int BuscaBinaria(int *vet, int chave, int inicio, int fim){
    int meio;
        if (inicio <= fim)
        {
            meio = (inicio + fim) / 2;
                if (chave == vet[meio])
                {
                    return meio;
                }
                else{
                    if (chave < vet[meio])
                    {
                        return BuscaBinaria(vet, chave, inicio, meio - 1);
                    }
                    else{
                        return BuscaBinaria(vet, chave, meio + 1, fim);
                    }
                }
            return - 1;
        }
}