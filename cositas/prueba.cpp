#include <iostream>
#include <string>

class sensor{
    
public: 

    std::string nombre;
    double valoractual;

    sensor(std::string n, double v1){
        nombre=n;
        valoractual=v1;
    }
    sensor(){
        nombre="sin nombre";
        valoractual=0;
    }
    void mostrar(){
        std::cout << "nombre: " << nombre << "\n"<< "valor actual: "<< valoractual<<"\n"; 
    }

};

int main(){
    sensor a ("temperatura",1500);
    a.mostrar();
    std::cout << "\n";
    sensor b("precion",600);
    b.mostrar();
    std::cout << "\n";
    std::cout << "SEGUNDO ESTRUCT"<<"\n";
    sensor c;
    c.mostrar();
    std::cout << "\n";
    sensor x;
    x.mostrar();
    std::cout << "\n";
    

    

}