#include <iostream>
//#include <locale>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
    //setlocale (LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int n1, n2, n3;
    float media;
    string nome;

    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome);
    cout << endl;

    cout << "Digite sua primeira nota: " << endl;
    cin >> n1;
    cout << endl;

    cout << "Digite sua segunda nota: " << endl;
    cin >> n2;
    cout << endl;

    cout << "Digite sua terceira nota: " << endl;
    cin >> n3;
    cout << endl;

    media = (n1 + n2 + n3) / 3;

    cout << "Sua média é: " << media << endl;

    return 0;
}
