#include <iostream>

bool primo (int a){
    for(int i = 2; i <= a - 1; i++){
        if(a % i == 0)
            return false;
    }
    return true;
}

int main (){
    int x,n;
    std::cin >> x >> n;
    for(int i = x; i <= n; i++){
        if(primo(i)){
            std::cout << i << "\n";
        }
    }
}