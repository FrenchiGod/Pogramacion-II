#include <iostream>
#include <string>

class Bateria{
    public:
    double voltaje;
    double capacidadAh;

    Bateria(){
        voltaje=0;
        capacidadAh=0;
        std::cout << "voltaje: "<< voltaje << "\n" << "capacidad en Ah" << capacidadAh << "\n";
    }
      Bateria(double v, double a){
        voltaje=v;
        capacidadAh=a;
        std::cout << "voltaje: "<< voltaje << "\n" << "capacidad en Ah: " << capacidadAh << "\n";
    }
};

int main(){
    Bateria b;
    Bateria a(10,20);
}