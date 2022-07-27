// CODIGO PARA GERAR UM ALEATORIO
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int maior = 20;
    int menor = 20;
    int aleatorio;
    int  V[20];
        for (int i = 0; i < 20; i++)
        {
           aleatorio = rand()%(maior - menor +1) + menor;
           V[i] = aleatorio ;
           cout << V[i] << endl;
        }
        
    return 0;
}