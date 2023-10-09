#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string input, nome;
    int idade;
    double salario;
    cout << "Digite seu nome, idade e salario separados por espaco: ";
    getline(cin, input);

    istringstream iss (input);

    iss >> nome;
    iss >> idade;
    iss >> salario;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
}