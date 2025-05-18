#include <iostream>
#include <locale>
using namespace std;

int main()
{
   setlocale (LC_ALL, "Portuguese");

   int numero;

   cout << "Informe um número para que seja apresentada a Tabuada: ";
   cin >> numero;

   if (numero >= 1 && numero <= 9) {

   cout << endl;
   cout << endl;

   cout << "Tabuada do " << numero << endl;
   cout << "**************" << endl;

   {
   int i;
   for (i = 1; i <= 10; i++)
    cout << i << " X " << numero << " = " << i*numero << endl;
   }

   cout << "**************" << endl;
   cout << endl;
   cout << endl;
   }

   else {
    cout << "Número Inválido" << endl;
   }

    return 0;
}
