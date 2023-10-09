#include <iostream>
#include <iomanip>

int fatorial(int x){
    if(x == 0 || x == 1)
        return 1;
    else
        return x * fatorial(x - 1);
}

double euler(int a){
    double b = 2;
    for(int i = 2; i <= a; i++){
        b += 1.0/fatorial(i);
    }
    return b;
}

int main(){
    int n;
    double res;
    std::cin >> n;
    double arm = fatorial(n);
    res = euler(n);
    std::cout << std::fixed << std::setprecision(6) << res << "\n";
}