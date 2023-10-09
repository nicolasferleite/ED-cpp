#include <iostream>
using namespace std;

int busca_binaria(int v[], int ini, int fim, int x){
    if(ini > fim){
        return -1;
    }
    int m = (ini + fim)/2;

    if(v[m] == x){
        return m;
    }

    if(v[m] < x){
        return busca_binaria(v, m + 1, fim, x);
    }

    if(v[m] > x){
        return busca_binaria(v, ini, m - 1, x);
    }
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    cout << busca_binaria(v, 0, n - 1, x) << endl;
}