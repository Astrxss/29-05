//Encontrar el numero menor del arreglo
#include <iostream>
using namespace std;
int main(){

    int numeros[5]={1,2,3,4,5},menor=100000;

    for(int i=0; i<5 ;i++){
        if(numeros[i] < menor){
            menor=numeros[i];
        }
    }
    cout << "el numero menor es " << menor << "\n";

    return 0;
}