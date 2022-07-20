//MAIOR E MENOR VALOR DE UM VETOR
#include <iostream>
using namespace std;

int main()
{
    int V[5] = {1, 2, 3, 8, 11};
    int num, maior, menor;

        maior = menor = V[0];
        for (int i = 0; i < 5; i++)
        {
            cout << "\n Digite os elementos do vetor: ";
            cin >> num;
            V[i]  = num;
            if (maior < V[i])
            {
                maior = V[i];
            }
            if (menor > V[i])
            {
                menor = V[i];
            }
            
        }
    cout << "\n O maior  numero e: " << maior << "|" << " O menor numero e: " << menor << endl;  
}