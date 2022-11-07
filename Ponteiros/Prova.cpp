#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void questao1();
void frac(float num, int*inteiro, float* frac, float* mult10);
void calc_hexa(float l, float *area, float *perimetro);

void questao1(){

    int vet[10];
    int *p;
    p = &vet[0];

    for (int i = 0; i < 10; i++){
        vet[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }

    cout << '\n';

    for (int i = 0; i < 10; i++){
        if ((vet[i] %2 != 0) && (vet[i] >12)){
            cout << &p[i] << " ";
        }
    }

}

void frac(float num, int*inteiro, float* frac, float* mult10){


    cout << num << '\n';

    int n = int(num);
    cout << "A parte inteira do numero e: "<< n << '\n';

    float fracion = num - n;
    cout << "A parte fracionaria do numero e: " << fracion << '\n';

    float mult = num * 10;
    cout << "A multiplicacao do numero por 10 e: " << mult << '\n';

    inteiro = &n;
    frac = &fracion;
    mult10 = &mult;
}

void calc_hexa(float l, float *area, float *perimetro){

    float a = (3 * pow(l,2) * sqrt(3))/2;
    cout << "A area do hexagono e: " << a;

    cout << '\n';
    float p = ( 6 * l);
    cout << "O perimetro do hexagono e: " << p;
    cout << '\n';

    area = &a;
    perimetro = &p;

}


int main(){

    cout << "Questao 1" << '\n';

    questao1();

    cout << '\n' << "___________________________" << '\n';


    cout << "Questao 2" << '\n';


    float num;

    cout << "Digite um numero fracionario: ";
    cin >> num;


    float *pnum = &num;
    int *inteiro;
    float *fracionado;
    float *mult;

    frac(num, inteiro, fracionado, mult);

    cout << "___________________________";


    cout << '\n' << "Questao 3";
    cout << '\n';


    float lado = 0;
    float *a;
    float *p;

    while (lado >= 0){
        cout << "Digite o tamanho do lado. Digite um valor negativo para sair: ";
        cin >> lado;
        cout << '\n';

        calc_hexa(lado, a , p);

        cout << '\n';

    }

return 0;
}
