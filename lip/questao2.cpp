#include <iostream>
using namespace std;

int main(){
    int fatorial, resultado = 1;

    cin >> fatorial;

    for (int i = 1; i <= fatorial; i++)
    {
        resultado = resultado * i;   
    }
    
    cout << "Fatorial de " << fatorial << ": " << resultado << endl;
}