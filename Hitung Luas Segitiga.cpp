#include<iostream>
using namespace std;

int main(){
	int a;
	int t;
	float L;
	
	cout<<"======================="<<endl;
	cout<<"Program Hitung Segitiga"<<endl;
	cout<<"======================="<<endl<<endl;
	//nilai dr sini
	a = 5;
	t = 9;
	
	
	//nilai dr user
	cout<<"Masukkan Nilai Alas    :"; cin>>a;
	cout<<"Masukkan Nilai Tinggi  :"; cin>>t;
    L = (float) (a*t)/2; //Rumus Luas Segitiga
	
	cout<<"Alas   = "<<a<<"\n";
	cout<<"Tinggi = "<<t<<"\n";
	cout<<"Luas Segitiga  = "<<L<<"\n";

	
	
	
	return 0;
}
