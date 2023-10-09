#include <iostream>
#include <sstream>
using namespace std;

bool ehNumero(char c) {
    if ((c >= '0' && c <= '9') || c == '-' || c == '.') {
        return true;
    }
    return false;
}

int identificaElemento(string caractere) {
    int resultado = 0;
    for (int i = 0; i < caractere.size(); i++) {
        if (ehNumero(caractere[i]) || caractere[i] == '-') {
            if (caractere[i] == '.') {
                resultado = 1;
            }
        } else {
            resultado = 2;
        }
    }
    return resultado;
}

int main() {
    string frase, token;
    string resultado = "";
    getline(cin, frase);
    istringstream ss (frase);
    while (getline(ss, token, ' ')) {
        int tipo = identificaElemento(token);
        if(tipo == 0){
            resultado += "int ";
        }
        if(tipo == 1){
            resultado += "float ";
        }
        if(tipo == 2){
            resultado += "str ";
        }
    }
    resultado.pop_back();
    cout << resultado << endl;
}
