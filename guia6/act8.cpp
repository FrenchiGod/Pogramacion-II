#include <iostream>
#include <string>

class Router{

    double potencia;
    double canal;
public:
    Router(double p, double c){
        potencia=p;
        canal=c;
    }

bool operator==(const Router& a ) const {
    return potencia == a.potencia && canal==a.canal;
}


};

int main(){
    for(int i=0;i<10;i++){
    srand(time(NULL));
    int valores1=random()% 5+ 1;
    int valores2=random()% 5+ 1;
    int valores3=random()% 5+ 1;
    srand(time(NULL));
    int valores4=random()% 5+ 1; 
    Router a(valores1,valores2);
    Router b(valores3,valores4);
    if (a==b) std::cout << "son el mismo router\n";
}
}