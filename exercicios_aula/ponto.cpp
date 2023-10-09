#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
    double x;
    double y;
};

double distancia(Ponto p, Ponto q){
    return sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
}

int main(){
    Ponto p;
    Ponto origem {0,0};
    cin >> p.x >> p.y;
    cout << distancia(p, origem) << endl;
}