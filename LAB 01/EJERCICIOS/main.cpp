#include <iostream>

using namespace std;

int ejercicio4()
{
    int A, B;
    cout <<"Ingrese un numeros, sin repetirlos: ";
    cin >> A >> B;
    if (A < B)
        cout << "El numero menor es: " << A << endl;
    else
        cout << "El numero menor es:" << B << endl;

    return 0;

}

int ejercicio6()
{
    int A, B;
    cout << "Ingrese dos numeros para saber su potencia: ";
    cin >> A >> N;
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
    cout << N << "=" << num << endl;
    return 0;
}

int ejercicio10()
{
    int N;
    cout <<"Ingrese un numero para ver sus multlipos: ";
    cin N;
    cout << "Multlipos de ;" << N << "Menores que 100: ";
    for (int i =1; i <100; i++)
        if (i % N= 0)
            cout << i << " ";
    cout << endl;
    return 0;
}
int ejercicio12()
{
    int N;
    cout << "Ingrese un numero para ver sus potencia :";
    cin >> N;
    for (int i = 1; i <= 5; i++)
        int num=1;
        for (int A = 0; A < i; A++)
            num+=N;
        cout << N <<" ^ "<< A << "=" << num << endl;
        return 0;
}

int ejercicio14()
{
    cout <<
}
