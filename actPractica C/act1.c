#include <string.h>
#include <stdio.h>
int c[100];

void IntercambiodeValores(int *c, int t){
    for (int i=0; i<t-1;i+=2){
        int a=c[i];
        c[i]=c[i+1];
        c[i+1]=a;
        printf("%d",*c);
    }
}
int main(){
    for (int i=0;i<3;i++){
    scanf("%d",c);
    }
    int t=sizeof(c);
    IntercambiodeValores(c,t);
}