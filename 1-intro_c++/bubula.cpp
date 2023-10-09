#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool ehVogal(char c) {
    string vogais = "aeiou";
    if (vogais.find(tolower(c)) != string::npos){
        return true;
    }  
    return false;
}

int main() {
    string frase, palavra, res = "", repet;
    getline(cin, frase);
    istringstream ss (frase);

    while (getline(ss, palavra, ' ')) {
        string novaPalavra = "";
        for (int i = 0; i < palavra.size() - 1; i++) {
            if (ehVogal(palavra[i]) && !ehVogal(palavra[i+1])){
                repet= palavra.substr(0, i+1);
                for (int j = 0; j < 3; j++) novaPalavra += repet;
                novaPalavra += palavra.substr(i+1, palavra.size());
                break;
            }
        }
        if(novaPalavra == "") novaPalavra += palavra;
        res += novaPalavra + " ";
    }
    res.pop_back();
    cout << res << endl;
}