#include<iostream>
using namespace std;

int main(){
	int termino, S=0, ACUMULADOR=0; // NUMEROS // SUMA 
	char Respuesta,Respuesta1;
	do{
		cout<<"Digite el termino que desea saber la suma: "; cin>>termino;
	if(termino<0){
		termino=termino*-1;
	}
	
	for(int i=0; i<=termino; i++){
		S=S+i;
	}cout<<"La suma de los "<<termino<<" primeros terminos es: "<<S<<endl;
	ACUMULADOR=ACUMULADOR+S;
	cout<<"Desea saber otra suma? (S/N) "; cin>>Respuesta;
	}while(Respuesta != 'N');
	cout<<"Deseas saber la suma de tus numeros (S/N)? " ; cin>>Respuesta1;
	
	if(Respuesta1 == 'S'){
		cout<<"La suma de tus numeros es "<<ACUMULADOR;
	}else{
		cout<<"GRACIAS, PROGRAMA TERMINADO.";
	}
	return 0;
}
