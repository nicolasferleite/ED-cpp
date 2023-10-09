#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

string minuscula(string frase){

    int n = frase.length();

    for(int i=0; i<n ;i++){
        if(isupper(frase[i] )){
            frase[i]=tolower(frase[i]);
        }
    }
    return frase;
}

string maiuscula(string frase){

    int n = frase.length();

    for(int i=0; i < n ;i++){
        if(islower(frase[i])){
            frase[i]=toupper(frase[i]);
        }
    }
    return frase;
}


string inverter(string frase){
    int n = frase.length();             
    for(int i = 0; i < n ; i++){
        if(islower(frase[i])){
            frase[i] = toupper(frase[i]);
        }else{
            frase[i] = tolower(frase[i]);
        } 
    }
    return frase;
}

string primeiraM(string frase){
    istringstream iss(frase);
    string palavra, res = "";

    while(iss >> palavra){
        int n = palavra.length();
        if(n == 1){
            for(int i = 0; i < n; i++){
                palavra = tolower(palavra[i]);
                res += palavra;
            }
        }
        
        else{
            palavra[0] = toupper(palavra[0]);
            res += palavra;
        }
        res += " ";
    }
    res.pop_back();
    return res; 
}

int main(){
    
    string str;
    char op;
    getline(cin,str);
    cin >> op;

    if(op == 'M'){
        cout << maiuscula(str) << endl;
    }

    if(op == 'm'){
        cout << minuscula(str) << endl;
    }

    if(op == 'p'){
        cout << primeiraM(str) << endl;
    }

    if(op == 'i'){
        cout << inverter(str) << endl;
    }
}