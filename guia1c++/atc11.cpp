#include <iostream>
#include <string>
#include <vector>
struct NodoRed
{
std::string ip;
int puerto;
bool activo;
};
std::vector <NodoRed>
    vector_nodos;

int main(){
    struct NodoRed nodo1;
    nodo1.ip="192.168.1.101";
    nodo1.puerto=random()% 65535;
    nodo1.activo=true;
    vector_nodos.push_back(nodo1);
    struct NodoRed nodo2;
    nodo1.ip="192.168.1.102";
    nodo1.puerto=random()% 65535;
    nodo1.activo=true;
    struct NodoRed nodo3;
    nodo1.ip="192.168.1.103";
    nodo1.puerto=random()% 65535;
    nodo1.activo=true;
    struct NodoRed nodo4;
    nodo1.ip="192.168.1.104";
    nodo1.puerto=random()% 65535;
    nodo1.activo=false;
    struct NodoRed nodo5;
    nodo1.ip="192.168.1.105";
    nodo1.puerto=random()% 65535;
    nodo1.activo=true;
    vector_nodos.push_back(nodo2);
    vector_nodos.push_back(nodo3);
    vector_nodos.push_back(nodo4);
    vector_nodos.push_back(nodo5);

    int aux=0;
        for (int i=0;i<vector_nodos.size();i++){
            if (vector_nodos[i].activo){
                aux++;
            }
        }
    std::cout << "la cantidad de nodos activos es: "<< aux<<"\n";



}