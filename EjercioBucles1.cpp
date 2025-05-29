#include<iostream>
using namespace std;

int main(){
	int Cn, N, mayor=0; 
	cout<<"BIENVENIDO"<<endl;
	cout<<"Digite la cantidad de numeros: "; cin>>Cn; 
	
	for(int i=1; i<=Cn; i++){
		cout<<"Digite el numero "<<i<< ":" ; cin>>N;
		
		while(N<=0){
			cout<<"Digite otro numero mayor a cero: "; cin>>N;
		}
		
		if(N > mayor){
			mayor = N;
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"GRACIAS, programa terminado."<<endl;
	return 0;
}
