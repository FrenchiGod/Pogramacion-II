#include <stdio.h>
#include <math.h>

double dbmAWatts(double p){
    p=(10*p/10)/1000;
    return p;
}
double wattsADbm(double w){
    w=10*log10(w*1000);
    return w;
}
int main()
{
double potenciaDbm = -30.0;
double potenciaWatts = dbmAWatts(potenciaDbm);
printf("%.2f dBm = %.6f W\n", potenciaDbm, potenciaWatts);
double watts = 0.001;
double dbm = wattsADbm(watts);
printf("%.4f W = %.2f dBm\n", watts, dbm);

return 0;
}