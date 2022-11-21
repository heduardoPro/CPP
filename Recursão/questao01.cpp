#include <iostream>

using namespace std;

int main()
{

    return 0;
}

int somatorio(int n){ //QUESTAO 01
    if (n == 0)
    {
        return 0;
    }
    else if (n < 0)
    {
        return n + somatorio(n + 1);
    }
    else{
        return n + somatorio(n - 1);
    }

}

int questao02(int a, int b, int res){

        cout << "digite dois valores: ";
        cin >> a >> b;
        res = a + b;

            cout << "Valor da soma: " << res << endl;
        switch (res)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
}

int procura(int x, int y, int z){
    if (y[z] == x)
    {
        return z;
    }
    else{
        return procura( x, y, z - 1);
    }
}

int Fibonacci(int b){
    if (b < 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(b - 1) + Fibonacci(b - 2);
    }
    
}

int fatorial(int num){
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num - 1);
    }
}

int Potencia(int a){
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else{
        return pow(a, 2);
    }
}

int mdc(int num1, int num2)
{
    if(num1 % num2 == 0)
        return num2;
    else
        return mdc(num2, num1 % num2);
}