#include <iostream>
#include <locale>
#include <cstring>
using namespace std;

int main()
{
    string nome;
    setlocale(LC_ALL, "Portuguese");
    cout << "Ol�, vamos conversar? " << endl;
    //PERGUNTA 1
    cout << "Qual � o seu nome? ";
    getline (cin, nome);
    //cin.getline (nome);
    cout << "\nNossa, " <<nome << ", que nome feio. \n";



    return 0;
}
