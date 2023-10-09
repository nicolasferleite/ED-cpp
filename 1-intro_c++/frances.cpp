#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char frase[100];

    cin.getline(frase, 100);

    for(int i = 0; i < strlen(frase); i++){
        cout <<frase[i];
        if(frase[i] == frase[i + 2] && frase[i + 1] == ' '){
            i+=2;
            if(frase[i] == frase[i + 2] && frase[i + 1] == ' ') {
                i+=2;        
            }
        }
    }



    cout << endl;
}