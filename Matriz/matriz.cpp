#include <iostream>
using namespace std;

int main()
{
    int  matriz[2][4];
    int l, c;

        matriz[0][0]=10;
        matriz[0][1]=20;
        matriz[0][2]=30;
        matriz[0][3]=40;
        matriz[1][0]=50;
        matriz[1][1]=60;
        matriz[1][2]=70;
        matriz[1][3]=80;
       

        for (l = 0; l < 2; l++)
        {
            for ( c = 0; c < 4; c++)
            {
                cout << matriz[l] [c];
            }
            cout  << "\n";
        }
              
}