#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> calcularTrianguloSoma(vector<int> v) {
    vector<vector<int>> triangulo;
    triangulo.push_back(v);

    while (v.size() > 1) {
        vector<int> nivelAcima;
        for (int i = 0; i < v.size() - 1; i++) {
            nivelAcima.push_back(v[i] + v[i + 1]);
        }
        triangulo.push_back(nivelAcima);
        v = nivelAcima;
    }
    return triangulo;
}

int main() {
    int n;
    cin >> n;
    vector<int> vet(n);

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    vector<vector<int>> soma = calcularTrianguloSoma(vet);
    for (int i = soma.size() - 1; i >= 0; i--) {
        for (int j = 0; j < soma[i].size(); j++) {
            cout << soma[i][j];
            if (j < soma[i].size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}