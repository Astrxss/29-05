//Encontrar el numero menor del arreglo
#include <iostream>
using namespace std;
int main(){

    int numeros[5]={1,2,3,4,5},mayor=0;

    for(int i=0; i<5 ;i++){
        if(numeros[i] > mayor){
            mayor=numeros[i];
        }
    }
    cout << "el numero mayor es " << mayor << "\n";

    return 0;
}