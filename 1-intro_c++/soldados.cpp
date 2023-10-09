#include <iostream>

int main(){
    int m[3][3], cont = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> m[i][j];
        }
    }
    for(int j = 0; j < 3; j++){
        for(int i = 1; i < 3; i++){
            if(m[i][j] < m[i - 1][j]){
                cont++;
            }
        }
    }
    
    std::cout << cont << "\n";
}