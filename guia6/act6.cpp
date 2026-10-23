#include <iostream>
#include <string>

class suscriptor{
    private: 
    double datos;


    public: 

    suscriptor (double d){setDatosdisponibles(d);}
     
    void setDatosdisponibles(double d){
        datos=d;
        for (int i=0; i<d;i++){
            srand(time(NULL));
            int descuento= random()%100 ;
            if (d==0){
                std::cout << "sin datos:\n"; 
                int i=d;
            }
            else if (d < descuento ){
                std::cout<<"consumo mayor al permitido, sin datos\n";
                i=d;

            }
            else{
                d=d-descuento;
                std::cout << "los datos disponible son: "<< d<<"\n";

            }
        }
    }
    double getDatosdiponibles(){return datos;}
    };
    
    int main(){
        double x;
        std::cin >> x;
        suscriptor a(x);
    }