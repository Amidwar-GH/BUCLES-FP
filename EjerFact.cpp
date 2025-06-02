#include<iostream>
using namespace std;

int main(){
	int F,N,i;
	
	cout<<Digite el numero que desea saber su factorial: ; cin>>N;
	F=1;
	if(N<0){
		N=-1*N;
	}
	F=1;
	for(i=1; i<=N; i++){
		F=F*i;
	}
	cout<<El factorial de << N << es: << F <<endl;
	
	
return 0;
}
