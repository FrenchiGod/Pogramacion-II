#include <iostream>
#include <string>

class Rack{
    public:
    std::string Router;
    bool estado;
    Rack(std::string a,bool e){
        Router=a;
        estado=e;
    }
    void motrarestado(){
        if (estado==true){
            std::string v="activo";
            std::cout << "Router: "<< Router <<"\n"<<"Estado: "<< v << "\n";
        }
        else {
            std::string v="inactivo";
            std::cout << "Router: "<< Router <<"\n"<<"Estado: "<< v << "\n";
        }
        
    }
};

int main(){
    std::cout << "El nombre y el estado (activo o incativo ), de los routers es el siguiente: \n ";
    Rack a("casa",1);Rack b("trabajo",0);Rack c("colegio",0);
    a.motrarestado();
    b.motrarestado();
    c.motrarestado();
    
    
}