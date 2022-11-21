#include <iostream>
#include <cmath>

int Fibonacci(int b);
int fatorial(int num);
int Potencia(int a);
int mdc(int num1, int num2);

using namespace std;

int main()
{   
    int b, n, a, num1, num2;
        
        cout << "\nCalcular Fibonacci de: ";
        cin >> b;

    Fibonacci(b);
    cout << Fibonacci(b) << endl; 

        cout << "\nInforme um numero que voce deseja calcular o fatorial: "; 
        cin >> n;
    
    fatorial(n);
    cout << "O fatorial de " << n << ": " << fatorial(n) << endl;

        cout << "\nInforme o valor para calcular a Potencia: ";
        cin >> a;

    Potencia(a);
    cout << "A Potencia de " << a << ": " << Potencia(a) << endl;

        cout << "\nCalcular o MDC(Maximo divisor comum): ";
        cin >> num1;
        cin >> num2;

    mdc(num1, num2);
    cout << "MDC: " << mdc(num1, num2) << endl;
    
    return 0;
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