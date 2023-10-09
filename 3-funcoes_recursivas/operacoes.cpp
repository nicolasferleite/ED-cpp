#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void imprimirReverso(const vector<int>& v, int i) {
    if (i >= 0) {
        cout << v[i] << " ";
        imprimirReverso(v, i - 1);
    }
}

int calcularSoma(const vector<int>& v, int i) {
    if (i < 0) {
        return 0;
    }
    return v[i] + calcularSoma(v, i - 1);
}

int calcularMultiplicacao(const vector<int>& v, int i) {
    if (i < 0) {
        return 1;
    }
    return v[i] * calcularMultiplicacao(v, i - 1);
}

int encontrarMenor(const vector<int>& v, int i, int menor) {
    if (i < 0) {
        return menor;
    }
    if (v[i] < menor) {
        menor = v[i];
    }
    return encontrarMenor(v, i - 1, menor);
}

int main() {
    vector<int> v;
    string input;
    getline(cin, input);

    istringstream stream(input);
    int x;
    while (stream >> x) {
        v.push_back(x);
    }

    cout << "vet : [ ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "]" << endl;

    cout << "rvet: [ ";
    imprimirReverso(v, v.size() - 1);
    cout << "]" << endl;

    int soma = calcularSoma(v, v.size() - 1);
    int multiplicacao = calcularMultiplicacao(v, v.size() - 1);
    int menor = encontrarMenor(v, v.size() - 1, v[0]);

    cout << "sum : " << soma << endl;
    cout << "mult: " << multiplicacao << endl;
    cout << "min : " << menor << endl;

    cout << "inv : [ ";
    imprimirReverso(v, v.size() - 1);
    cout << "]" << endl;
}