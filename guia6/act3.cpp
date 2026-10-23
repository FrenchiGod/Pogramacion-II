#include <iostream>
#include <string>

class Puntodeacceso{ 
public:

    std::string SSID;
    int canal; 
    
    Puntodeacceso(std::string a, int b){
        SSID=a;
        canal=b;
        std::cout << "SSID: "<< SSID << "\n" << "Canal: "<<canal<<"\n";
    }
};

int main(){
    Puntodeacceso a("punto norte",10);
}