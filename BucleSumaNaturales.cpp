#include<iostream>
using namespace std;

int main(){
	int n, S=0, ACUMULADOR=0; // NUMEROS // SUMA 
	char Respuesta,Respuesta1;
	do{
		cout<<"Digite el termino que desea saber la suma: "; cin>>n;
	if(n<0){
		n=n*-1;
	}
	
	for(int i=0; i<=n; i++){
		S=S+i;
	}cout<<"La suma de los "<<n<<" primeros terminos es: "<<S<<endl;
	ACUMULADOR=ACUMULADOR+S;
	cout<<"Desea saber otra suma? (S/N) "; cin>>Respuesta;
	}while(Respuesta != 'N');
	cout<<"Deseas saber la suma de tus numeros (S/N)? " ; cin>>Respuesta1;
	
	if(Respuesta = 'S'){
		cout<<"La suma de tus numeros es "<<ACUMULADOR;
	}else{
		cout<<"GRACIAS, PROGRAMA TERMINADO.";
	}
	return 0;
}
