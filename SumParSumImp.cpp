#include<iostream>
using namespace std;

int main(){
	int n, S=0; // NUMERO LIMITE // SUMA// 
	cout<<Digite un numero para saber la suma de sus impares: ; cin>>n;
	
	for(int i=1; i<=n; i++){
		if(i % 2 != 0){
			S=S+i;
		}
	}
	cout<<La suma de los impares es <<S<<endl;
	
	return 0; 
}
