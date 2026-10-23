#include <iostream>
#include <stdio.h>

int main(){
    int i =0,a=0,cont=0;
    for (i=0;i<10;i++){
        a=rand() % 50 - 90;
        if (a>=-70){
            cont++;
        }
        std::cout << a;
        
    }
    std::cout <<"\n";
    std::cout << "los valores por debajo de -70db son: " << cont;
} 