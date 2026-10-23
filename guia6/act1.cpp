#include <iostream>
#include <string>

class PuntodeAcceso {

public:

    std::string SSID;
    int canal; 
    void mostrar(){
        std::cout << "SSID: "<< SSID << "\n" << "Canal: "<<canal<<"\n";

    }
};

int main(){
    PuntodeAcceso a;
    a.SSID="punto norte";
    a.canal=10;
    a.mostrar();
    PuntodeAcceso b;
    b.SSID="punto sur";
    b.canal=4;
    b.mostrar();

}
