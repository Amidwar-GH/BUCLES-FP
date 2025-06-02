#include<iostream>
using namespace std;

int main(){
	int F,N,i;
	char Respuesta;
	cout<<"Digite el numero que desea saber su factorial: "; cin>>N;
	F=1;
	if(N<0){
		N=-1*N;
	}
	F=1;
	for(i=1; i<=N; i++){
		F=F*i;
	}
	cout<<"El factorial de "<< N <<" es: "<< F <<endl;
	cout<<"\nDeseas saber si el factorial es par o impar (S/N)?  "; cin>>Respuesta;
	if(Respuesta == 'S' || Respuesta == 's'){
		if(F % 2 == 0){
			cout<<F<<" es par ";
		}else{
			cout<<F<<" es impar ";
		}
	}else{
		cout<<"Gracias, PROGRAMA TERMINADO.";
	}
	
return 0;
}
