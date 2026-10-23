#include <iostream>
#include <string>

class sensor{
    private: 
        int valorActual;
    public:
        sensor(){ setValorActual();}
        void setValorActual(){
            srand(time(NULL));
            int x= rand()%125 -40;
            int y= rand()%125 -40;
            int z= rand()%125 -40;
            if (x<y && x<z){
                std::cout << " el valor mas alto es: "<<x<< "\n"; 
                valorActual=x;
            }
            else if (y<x && y<z){
                std::cout << "el valor mas alto es: "<<y<<"\n";
                valorActual=y;
            }
            else {
                std::cout << "el valor mas alto es: "<<z<< "\n";
                valorActual=z; 
            }


        }
    
    
};  
int main (){
    int x= rand()%125 -40;
    int y= rand()%125 -40;
    int z= rand()%125 -40;
}