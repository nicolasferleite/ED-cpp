#include <iostream>

using namespace std;

int max(int v[], int n){
    if(n == 1){
        return v[0];
    } else{
        int x = max(v, n - 1);
        if(x > v[n - 1]){
            return x;
        } else {
            return v[n - 1];
        }
    }

}

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int a = max(v, n);
    cout << a << endl;
}