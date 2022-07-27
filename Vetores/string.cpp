#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;
        cout << "\n Digite a palavra: ";
        getline(cin, palavra);
        cout << "\n A palavra tem " << palavra.size() << " letras" << endl;

    return 0;
}