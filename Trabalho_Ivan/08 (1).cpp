#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    char cod;

    cout << "Você deseja imprimir uma tabuada?" << endl;
    cout << "Digite: (S - para SIM) ou (N - para NÃO): ";
    cin >> cod;
    cod = toupper(cod);

    if (cod == 'N') {
        return 0;
    }

    while (cod == 'S') {
     cout << "Informe um número para que seja apresentada a Tabuada: ";
     cin >> numero;
     cout << endl << endl;

     if (numero >= 1 && numero <= 9) {
     cout << "Tabuada do " << numero << endl;
     cout << "**************" << endl;
   {
   int i;
   for (i = 1; i <= 10; i++)
    cout << i << " X " << numero << " = " << i*numero << endl;
   }

   cout << "**************" << endl;
   cout << "Você deseja imprimir uma tabuada?" << endl;
   cout << "Digite: (S - para SIM) ou (N - para NÃO): ";
   cin >> cod;
   cod = toupper(cod);

    } else {
     cout << "Número inválido." << endl << endl;
    }
    }

    return 0;
}
