#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main(){
    char frase[100];
    string palavras[10];
    string palavra;
    int aux = 0, cont = 0;
    cin.getline(frase, 100);

    istringstream iss;

    iss.str(frase);

    while (iss >> palavra){
        palavras[aux] = palavra;
        aux++;
    }
    
    for(int i = 0; i < aux - 1; i++){
        if(palavras[i] < palavras[i + 1])
            cont++;
    }

    if(cont == 0){
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }
    



}