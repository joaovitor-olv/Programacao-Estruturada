#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto[] = "Este exemplo busca por um determinado caracter dentro de uma string.";
    char *ptr;
    cout << "Procurando por 's' no texto: \n\n" << texto << endl << endl;
    ptr=strrchr(texto, 's');

    if (*ptr) {
        cout << "A letra s apareceu a ultima vez na posi��o: " << ptr-texto+1;
    } else {
        cout << "Letra n�o encontrada no texto.";
    }
    return 0;
}
