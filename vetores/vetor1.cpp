#include <iostream>
using namespace std;

int main()
{
    int idade[10];
    float soma=0;
        
        for(int i=0; i < 10; i++)
        {
            cout << "\n digite a idade:";
            cin >> idade[i];
        }
        for (int i = 0; i < 10; i++)
        {
            soma = soma + idade[i];
        }
            cout << soma/10 << "\n" << endl;
    return 0;
}