#include <iostream>
#include <cmath>
#include <string>

class Enlacerf {

    public:

    double frecuencia;
    double distancia;

    Enlacerf(double f, double d){
        frecuencia=f;
        distancia=d;
    }
    void espaciolibre(){
        double calculo1=20*log10(distancia)+20*log10(frecuencia)+(32.44);
        std::cout << "valor de espacio libre: "<< calculo1<<"\n";
    }
};

int main(){
    Enlacerf t(1500,60);
    t.espaciolibre();
}