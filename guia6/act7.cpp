#include <iostream>
#include <string>

class enlace {
    public:
    std::string origen;
    std::string destino;
    double anchodebandaMPS;
};
    std::ostream& operator<<(std::ostream& os, const enlace& a){
        os << "origen: "<< a.origen << "\n"<< "destino: "<< a.destino << "\n" << "ancho de banda en MPS: "<< a.anchodebandaMPS<< "\n";
        return os ;
    }

int main(){
    std::string o,b;
    double a;
    std::cin >> o;
    std::cin >> b;
    std::cin >> a;
    enlace x{o,b,a};
    std::cout << x << "\n";
    
}
