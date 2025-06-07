#include<iostream>
using namespace std;

int main(){
	int termino, S=0, ACUMULADOR=0; // NUMEROS // SUMA 
	char Respuesta,Respuesta1;
	cout << "==========================================" << endl;
	cout << "BIENVENIDO A MI PROGRAMA!" << endl;
	
	do{
		S = 0;
		cout<<"Digite la cantidad de terminos que desea sumar: " << endl;
		cin>>termino;
		
		if(termino<0){
			termino=termino*-1;
		}
		
		for(int i=0; i<=termino; i++){
			S=S+i;
		}
		cout<<"La suma de los "<<termino<<" primeros terminos es: "<<S<<endl;
		
		ACUMULADOR=ACUMULADOR+S;
		
		cout<<"Desea saber otra suma? (S/N) " << endl;
		cin>>Respuesta;
		
	}while(Respuesta != 'N' && Respuesta != 'n');
	
	cout<<"Deseas saber la suma de tus numeros (S/N)? " << endl; cin>>Respuesta1;
	
	if(Respuesta1 == 'S' || Respuesta1 == 's'){
		cout<<"La suma de tus numeros es "<<ACUMULADOR;
		
		cout << "\n";
		
		cout<<"GRACIAS, PROGRAMA TERMINADO.";
	}else{
		cout<<"GRACIAS, PROGRAMA TERMINADO.";
	}
	return 0;
}
