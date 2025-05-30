#include<iostream>
using namespace std;

int main(){
	int n, S=0; // NUMEROS // SUMA 
	cout<<Digite el numero que desea saber la suma: ; cin>>n;
	
	for(int i=0; i<=n; i++){
		S=S+i;
	}cout<<La suma es <<S<<endl;
	
	
	return 0;
}
