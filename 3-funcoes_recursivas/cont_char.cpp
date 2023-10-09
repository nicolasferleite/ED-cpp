#include <iostream>
#include <string>

using namespace std;

int contaCaracteres(string str, int n, char c)
{
    if(n == 0){
        return 0;
    }
    int cont = 0;
    if(str[n] == c){
        cont++;
    }
    return cont + contaCaracteres(str, n - 1, c);
}

int main() 
{
   string str;
   getline(cin,str);
   int n = str.size();
   char c;
   cin >> c;
   cout << contaCaracteres(str, n - 1, c) << endl;
}