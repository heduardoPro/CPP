#include <iostream>

using namespace std;

int main()
{   
    int soma=0;
    int V[4][5];

        for (int i = 0; i < 4; i++)
        {
           for (int j = 0; j < 5; j++)
           {
            cout << V[i][j] << i*2;
            if (i == j)
            {
                cout << V[i][j];
            }
            soma = soma + V[i][j];
            if (V[i][j] % 4 == 0)
            {
                cout << V[i][j];
            }
            if (i == 2 || i == 4)
            {
               cout << V[i][j];
            }
            
           }
           
        }
     return 0;   
}