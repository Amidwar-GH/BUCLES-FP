/*11: Diseña un algoritmo que reciba un número entero positivo y calcule su factorial. El
factorial de un número, representado como n!, es el producto de todos los números
positivos menores o iguales a n. Por ejemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120.*/
#include <iostream>
using namespace std;
int main(){
    int num, i, factorial;
	factorial=1; 
    cout<<"Ingrese un numero entero positivo para calcular su factorial: ";
    cin>>num;
    if(num < 0){
        cout << "El numero debe ser positivo."<<endl;
    } else {
        for(i = 1; i <= num; i++){
            factorial = factorial* i;
        }
        cout<<"El factorial de "<<num<<" es: "<<factorial<<endl;
    }
    return 0;
}
