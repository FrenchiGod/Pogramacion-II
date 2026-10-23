#include <iostream>
#include <string>

int i=0;
double k[5];
struct medicion{
    int canal[5];
    double rssi[5];

};
int main (){
    for (i=0;i<5;i++){
    *k=rand() % 100 +1;
    }
    struct medicion v;
    v.canal[0]= 1;v.rssi[0]=k[0];
    v.canal[1]= 2;v.rssi[1]=k[1];
    v.canal[2]= 10;v.rssi[2]=k[2];
    v.canal[3]= 22;v.rssi[3]=k[3];
    v.canal[4]= 4;v.rssi[4]=k[4];

    for (i=0;i<5;i++){
        std::cout <<" canal "<<v.canal[i]<<" Medicion Rssi: "<<v.rssi[i]<<"\n";
    }
}
