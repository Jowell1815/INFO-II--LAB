#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int ejercicio4();
int ejercicio6();
int ejercicio8();
int ejercicio10();
int ejercicio12();
int ejercicio14();
int ejercicio16();
int ejercicio18();
int ejercicio20();
int ejercicio22();
int ejercicio24();
int ejercicio30();

int main()
{
    ejercicio4();
    ejercicio6();
    ejercicio8();
    ejercicio10();
    ejercicio12();
    ejercicio14();
    ejercicio16();
    ejercicio18();
    ejercicio20();
    ejercicio22();
    ejercicio24();

    return 0;
}

int ejercicio4()
{
    int A, B;
    cout <<"Ingrese un numeros, sin repetirlos: ";
    cin >> A >> B;
    if (A < B){
        cout << "El numero menor es: " << A << endl;
    }
    else{
        cout << "El numero menor es:" << B << endl;
    }
    return 0;
}

int ejercicio6()
{
    int A, B;
    cout << "Ingrese dos numeros para saber su potencia: ";
    cin >> A >> B;
    int N=1;
    for (int i = 0; i < B;i++)
        N+=A;
    cout << A << "^" << B<< "=" << N<< endl;
    return 0;
}

int ejercicio8()
{
    int N;
    cout << "Ingrese un numero para saber su factorial: ";
    cin >> N;
    int num = 1;
    for (int i =1; i <= N; i++)
        num *= i;
    cout << N << "! = " << num << endl;
    return 0;
}

int ejercicio10()
{
    int N;
    cout <<"Ingrese un numero para ver sus multlipos: ";
    cin >> N;
    cout << "Multiplos de " << N << " menores que 100: ";
    for (int i =1; i <100; i++)
        if (i % N == 0)
            cout << i << " ";
    cout << endl;
    return 0;
}
int ejercicio12()
{
    int N;
    cout << "Ingrese un numero para ver sus potencia :";
    cin >> N;
    for (int i = 1; i <= 5; i++){
        int P=1;
        for (int A = 0; A < i; A++){
            P+=N;
        }
        cout << N <<" ^ "<< i << "=" << P << endl;
    }
    return 0;
}

int ejercicio14()
{
    for (int A= 1, B= 50; A<= 50;A++, B--){
        cout<< A << "            "<< B<< endl;
    }
    return 0;
}

int ejercicio16()
{
    int N, suma = 0, C = 0;
    cout << "Ingrese numeros, PARA TERMINAR INGRESE O: " << endl;

    while (true) {
        cin >> N;
        if (N == 0) break;
        suma += N;
        C++;
    }
    if (C > 0) {
        double A = static_cast<double>(suma) / C;
        cout << "El promedio es: " << A << endl;
    }
    return 0;
}

int ejercicio18()
{
    int N;
    bool C=false;
    cout <<"INGRESE UN NUMERO: ";
    cin>>N;
    for (int i = 0;i * i <= N; i++){
        if (i*i ==N ){
            C=true;
            break;
        }
    }
    if (C){
        cout<< N<< "Es un cuadrado perfecto: ";
    }
    else
        cout<<N<< "NO es un cuadrado perfecto: ";
    return 0;
}


int ejercicio20()
{
    int N, A, B = 0;
    cout << "Ingrese un numero: ";
    cin >> N;
    A = N;
    while (N > 0) {
        B = B * 10 + N % 10;
        N /= 10;
    }
    if (A == B) {
        cout << A << " es un numero palindromo." << endl;
    } else {
        cout << A << " NO es un numero palindromo." << endl;
    }
    return 0;
}

int ejercicio22()
{
    int segundos;
    cout<< "Ingrese los segundos :) : ";
    cin>> segundos;
    int hr = segundos/3600;
    segundos%= 3600;
    int m= segundos/60;
    segundos%=60;
    cout << hr << ":"<<m << ":"<< segundos << endl;
    return 0;
}
/*
int ejercicio24()
{
    int n;
    cout<<"Ingrese el tamaño del cuadrado: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for (int l=1; l<=;1++){
            cout<<"+";
        }
    }
}
/*

*/
int ejercicio30()
{
    int A = rand() % 101;
    int B;
    int C = 0;
    srand(time(NULL));

    cout << "ADIVINA UN NUMERO ENTRE 0 Y 100" << endl;
    do {
        cout << "INGRESE UN NUMERO: ";
        cin >> B;
        C++;
        if (B < A) {
            cout << "El número es mayor." << endl;
        } else if (B > A) {
            cout << "El número es menor." << endl;
        }
    } while (B != A);
    cout << "Adivinaste el numero " << A
         << " en " << C << " intentos." << endl;
    return 0;
}
