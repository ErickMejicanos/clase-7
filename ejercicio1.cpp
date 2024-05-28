#include <iostream>
using namespace std;
int main()
{

    int x;

    cout << "Ingrese un numero: \n";
    cin >> x;

    int par[x];
    int cuenta = 0;
    int numeros[x];
    cout << "Ingrese " << x << " numeros" << endl;

    for (int i = 0; i < x; i++){
        cin >> numeros[i];

    if (numeros[i] % 2 == 0){
        par[cuenta] = numeros[i];
        cuenta++;
    }
 }
    for (int i = 0; i < cuenta; i++)
    {
        cout << "El numero par es: " <<  par[i]  << "\n";
        
    }
    return 0;
    
}
