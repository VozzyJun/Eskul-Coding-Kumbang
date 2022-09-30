#include<iostream>
using namespace std;

int main(){
	int Luas, panjang, lebar;
	
	
	cout<<"==============================\n";
	cout<<"Program Hitung Persegi Panjang\n";
	cout<<"==============================\n";
	
	cout<<"Masukkan Panjang = "; cin>>panjang;
	cout<<"Masukkan Lebar   = "; cin>>lebar;
	
	Luas = panjang * lebar;
	
	cout<<"Luas             = Panjang x Lebar \n";
	cout<<"                 = "<<panjang<<" x "<<lebar<<"\n";
	cout<<"                 = "<<Luas;
	
	
	
	return 0;
}
