#include <iostream>
#include <cmath>
#include <string>

class antena{

    public :

double frecuencia; 
double ganancia; 

void mostrar ()
{
std::cout << "Frecuencia: "
<< frecuencia << " MHz\n";
}
void calcularlongituddeonda(){
    
    double potencia = std::pow(10,6);
    double valor= frecuencia*potencia;
    double potencia2= std::pow(10,8); 
    double amplificacion= 3*potencia2/valor; 
    std::cout << "valor de longitud de onda: "<< amplificacion<<"\n";
}
};

int main(){
    antena t;
    t.frecuencia = 1500;
    t.calcularlongituddeonda();
}