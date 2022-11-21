#include <iostream>

using namespace std;

int soma(int res, int a, int b);

int main()
{   

    return 0;
}

int soma(int res, int a, int b){
    cout << "Digite dois valores: ";
    cin >> a;
    cin >> b;

    res = a + b;
        cout << "A soma dos valores: " << res << endl;
}