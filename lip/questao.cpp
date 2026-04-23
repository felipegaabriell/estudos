#include <iostream>
using namespace std;

int main(){
    int base, potencia, resultado;

    cin >> base >> potencia;

    resultado = base;

    if (potencia == 0){
        resultado = 1;
    } else {

        for (int i = 1; i < potencia; i++)
        {
            cout << resultado << " " << endl;
            resultado = resultado * base;
            cout << resultado << " " << endl;
            cout << endl;
        }

    }
    
    
    cout << base << " elevado a " << potencia << " e " << resultado;
        

    
    
}
