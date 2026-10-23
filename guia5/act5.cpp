#include <iostream>
#include <string>

class Router {

private :
double potencia; 
public:
Router(double p) { setPotencia(p ); } 
void setPotencia(double p )
{
if (p >= 0 && p <= 30 )

potencia = p ;

else
std::cout << "Fuera de rango, se ignora.\n" ;
}

double getPotencia() { return potencia ; }
};

int main(){
    double x;
    std::cin >> x;
    Router a(x);
}