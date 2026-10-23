#include <iostream>
#include <string>

class cable{
public:
    double longitudmetros;
    double atenuacionpormetro;
    double atenuaciontotal;
    
    void calculo(){
        atenuaciontotal=longitudmetros*atenuacionpormetro;
        std::cout << "la Atenuacion total: " << atenuaciontotal<<"\n";
    }
};
double L,atenuacion;
int main(){
    cable a;
    std::cout << "ingrese los valores de metros; ";
    std::cin >> L;
    std::cout << "ingrese el valor de atenuacion por metro: ";
    std::cin >> atenuacion;
    a.longitudmetros=L;
    a.atenuacionpormetro=atenuacion;
    a.calculo();
}