#include <iostream>
using namespace std;

long long silnia(int n){
	long long wynik = 1;
	for(int i =1; i<=n; i++){
		wynik *= i;
	}
	return wynik;
}


int main(){
	int n;
	cin >> n;

	if(n<0){
		cout<<"Bledna wartosc, nie moze byc ujemna"<<endl;
		return 0;
	}

	cout<< silnia(n) <<endl;

	return 0;
}
