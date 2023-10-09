#include <iostream>

int main() {
    int n, cont = 0;
    std::cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        std::cin >> v[i];
        if(!(i == 0)){
            if(v[i] < v[i - 1])
                cont++;
        }
    }
    
    if(cont == 0)
        std::cout << "ok" << "\n";
    else
        std::cout << "precisa de ajuste" << "\n";
    
}