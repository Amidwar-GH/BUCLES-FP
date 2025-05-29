#include<iostream>
using namespace std;

int main(){
	int n, N, mayor=0; 
	cout<<Digite la cantidad de numeros: ; cin>>n; 
	
	for(int i=1; i<=n; i++){
		cout<<Digite el numero <<i<< : ; cin>>N;
		
		while(N<=0){
			cout<<Digite otro numero mayor a cero: ; cin>>N;
		}
		
		if(N > mayor){
			mayor = N;
		}
	}
	cout<<El numero mayor es: <<mayor<<endl;
	return 0;
}
