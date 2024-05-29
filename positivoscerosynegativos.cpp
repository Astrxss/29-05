// Programa q encuentre, numero positivos, negativos y 0 en arreglo
#include <iostream>
using namespace std;
int main(){
    int numeros[10]={-1,-2,-3,-4,0,1,2,3,4,5},positivos=0,negativos=0,ceros=0;

    for(int i=0; i<10;i++){
        if(numeros[i]>0){
            positivos = positivos + 1;
        }
        else if(numeros[i]==0){
            ceros = ceros + 1;
        }
        else if(numeros[i]<0){
            negativos = negativos + 1;
        }
    }
    cout << "hay " << positivos <<" numeros positivos.\n";
    cout << "hay " << ceros <<" ceros.\n";
    cout << "hay " << negativos <<" numeros negativos\n";

    return 0;
}