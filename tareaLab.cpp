#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int N=0;
	int i, j, aux, mitad1, mitad2;
	while(N%2==0 or (N<3 or N>25)){
		cout<<"Escribe N tal que sea un impar entre el 3 y 25 \n";
		cin>>N;
	}
	int arr[N];
	cout<<"Arreglo original: \n";
	for(i=0; i<N;i++){
		arr[i]= rand() % 50 + 1;
		cout<<arr[i]<<" ";

	}
	mitad1=(N/2)-1;
	mitad2=mitad1+2;
	for(i=0; i<mitad1 ;i++){
		for(j=0; j<mitad1; j++){
			if(arr[j]>arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
	for(i=mitad2; i<N ;i++){
		for(j=mitad2; j<N; j++){
			if(arr[j]<arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
	cout<<"\n Arreglo ordenado \n";
	for(i=0; i<N; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	}
	
