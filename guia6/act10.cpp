#include <iostream>
#include <string>
#include <vector>

class DispositivosRed{
    protected:
    
    std::string  nombre; 
    bool activo;
    
    public:
        DispositivosRed(std::string n,bool a): nombre(n),activo(a) {}

    virtual void MostrarEstado()const{
        std::cout << nombre << ": "<<" Estado: "<< activo<< "\n";
    }
};
class Switch:public DispositivosRed{
    private: 
        double puertos;

    public:
        Switch(std::string n, bool a,double p) : DispositivosRed(n, a) , puertos(p) {}
 
    void MostrarEstado() const {
        
        DispositivosRed::MostrarEstado();    

        std::cout  << "puerto: "<< puertos<<"\n";
    }
};
class AccesPoint:public DispositivosRed{
        private: 
            double canal;
        public: 
        AccesPoint(std::string n, bool a, double c): DispositivosRed(n,a),canal(c){}
        void MostrarEstado()const{
            DispositivosRed::MostrarEstado();
            std::cout << "canal: "<< canal<<"\n";
        }
};

int main(){
    int a,b,c,x;
    srand(time(NULL));
    a=rand()%10000;
    b=rand()%2;
    x=rand()%2;
    c=rand()%100;
    std::vector<DispositivosRed*> red;

    red.push_back(new DispositivosRed("microtik",x));
    red.push_back(new Switch("Gamora",b,a));
    red.push_back(new AccesPoint("Redhat",b,c));

    for (int i = 0; i < red.size(); i++) {
        red[i]->MostrarEstado(); 
    }
    for (int i = 0; i < red.size(); i++) {
        delete red[i];
    }

    return 0;

}