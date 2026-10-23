#include <stdio.h>
#include <math.h>

double calcularFSPL(double a,double b){
    double v1=32.44+20*log10(a)+20*log10(b);
    return v1;
}
double calcularPotenciaRecibida(double a, double b,double c,double f){
    double p=a+b+c-f;
    return p;
}
int main()
{
double distanciaKm = 5.0;
double frecuenciaMHz = 2400.0;
double perdida = calcularFSPL(distanciaKm, frecuenciaMHz);
printf("Perdida por espacio libre: %.2f dB\n", perdida);
double potenciaRx = calcularPotenciaRecibida(43.0, 15.0, 12.0, perdida);
printf("Potencia recibida estimada: %.2f dBm\n", potenciaRx);
return 0;
}