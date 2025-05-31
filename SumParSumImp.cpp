#include<iostream>
using namespace std;

int main(){
	int n, SumaDePares=0, SumaDeImpares=0, opcion; // NUMERO LIMITE // SUMA// 
	cout<<"Digite un numero para saber la suma de sus impares: "<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		if(i % 2 != 0){
			SumaDeImpares+=i;
		}else{
			SumaDePares+=i;
		}
	}
	cout<<"\nQue suma desea saber?: "<<endl;
	cout<<"1. suma de pares"<<endl;
	cout<<"2. suma de impares"<<endl;
	cout<<"3. ambas sumas"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"La suma de numeros pares es "<<SumaDePares;
			break;
		
		case 2:
			cout<<"La suma de impares es: "<<SumaDeImpares;
			break;
		
		case 3:
			cout<<"La suma de pares es "<<SumaDePares<<" y la suma de impares es "<<SumaDeImpares;
			break;
			
		default:
			cout<<"Opcion no valida."<<endl;
			break;		
	}
	cout<<"\nEl PROGRAMA FINALIZO,GRACIAS";
	
	return 0; 
}
