#include <iostream>
#include <iomanip>

using namespace std;

class Box{
    private: 
        double length;
        double width;
        double height;

    public:
        Box(double l, double w, double h){
            setHeight(h);
            setLength(l);
            setWidth(w);
        }

        double volume(){
            return length * width * height;
        }

        void setLength(double l){
            if(l >= 0)
                length = l;
            else
                cout << "fail: comprimento negativo" << endl;
        }

        void setWidth(double w){
            if(w >= 0)
                width = w;
            else
                cout << "fail: largura negativa" << endl;
        }

        void setHeight(double h){
            if(h >= 0)
                height = h;
            else
                cout << "fail: altura negativa" << endl;
        }
};

int main(){
    double l,w,h;
    cin >> l >> w >> h;

    Box box(l,w,h);
    cout << fixed << setprecision(2) << box.volume() << endl;
}