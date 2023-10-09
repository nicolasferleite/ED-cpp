#include <iostream>

int main() {
    int n, primeiro = 0, segundo = 0;
    std::cin >> n;
    float prod[n];
    float chute[n];
    char esc[n];
    
    for(int i = 0;i < n; i++){
        std::cin >> prod[i];
    }
    
    for(int i = 0;i < n; i++){
        std::cin >> chute[i];
    }
    
    std::cin.ignore();
    
    for(int i = 0;i < n; i++){
        std::cin >> esc[i];
    }
    
    for(int i = 0; i < n; i++){
        if(prod[i] == chute[i]){
            primeiro++;
        }
        if(prod[i] < chute[i] && esc[i] == 'm'){
            segundo++;
        }
        if(prod[i] < chute[i] && esc[i] == 'M'){
            primeiro++;
        }
        if(prod[i] > chute[i] && esc[i] == 'M'){
            segundo++;
        }
        if(prod[i] > chute[i] && esc[i] == 'm'){
            primeiro++;
        }
    }
    
    if(primeiro > segundo)
        std::cout << "primeiro" << "\n";
    else if(segundo > primeiro)
        std::cout << "segundo" << "\n";
    else
        std::cout << "empate" << "\n";
}