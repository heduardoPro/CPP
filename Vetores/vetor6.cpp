#include <iostream>
using namespace std;

int main()
{
    int N, maior = 0;
    int V[10];
        for (int i = 0; i < 10; i++)
        {
            cout << "\n informe um valor: ";
            cin >> N;
            V[i] = N;
        }for (int i = 0; i < 10; i++)
        {
            cout << "\n Este eo vetor: " << V[i] << endl;
            
        }if (maior < V[i])
        {
           maior = V[i];
        }
        cout << "O maior elemento e "  << maior << " e a posicao do elemento  " << i << endl;
}