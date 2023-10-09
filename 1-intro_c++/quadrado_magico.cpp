#include <iostream>

int main() {
    int l1 = 0,l2 = 0,l3 = 0,c1 = 0,c2 = 0,c3 = 0,d1 = 0,d2 = 0;
    int m[3][3];
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){
            std::cin >> m[i][j];
        }
    }
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){
            if(i == 0 && j == 0){c1+=m[i][j];l1+=m[i][j];d1+=m[i][j];}
            if(i == 0 && j == 1){c2+=m[i][j];l1+=m[i][j];}
            if(i == 0 && j == 2){c3+=m[i][j];l1+=m[i][j];d2+=m[i][j];}
            if(i == 1 && j == 0){c1+=m[i][j];l2+=m[i][j];}
            if(i == 1 && j == 1){c2+=m[i][j];l2+=m[i][j];d1+=m[i][j];d2+=m[i][j];}
            if(i == 1 && j == 2){c3+=m[i][j];l2+=m[i][j];}
            if(i == 2 && j == 0){c1+=m[i][j];l3+=m[i][j];d2+=m[i][j];}
            if(i == 2 && j == 1){c2+=m[i][j];l3+=m[i][j];}
            if(i == 2 && j == 2){c3+=m[i][j];l3+=m[i][j];d1+=m[i][j];}
        }
    }
    if(c1 == c2 && c2 == c3 && c3 == l1 && l1 == l2 && l2 == l3 && l3 == d1 && d1 == d2)
        std::cout << "sim" << "\n";
    else
        std::cout << "nao" << "\n";
}