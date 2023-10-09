#include <iostream>

using namespace std;

int maximo(int v[], int ini, int fim){
    if(ini == fim){
        return v[ini];
    }

    int m = (ini + fim)/2;
    int max1 = maximo(v,ini,m);
    int max2 = maximo(v, m + 1, fim);
    
    return (max1 > max2) ? max1 : max2;
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << maximo(v, 0, n - 1) << endl;
}