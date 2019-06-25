#include <iostream>

using namespace std;

int main()
{
	int tinggi, sisi, ss, Luas;
	
	cout<<"Menghitung Luas Trapesium Sama Kaki\n";
	cout<<"Masukan Tinggi\t\t: ";
	cin>>tinggi;
	cout<<"Masukan Panjang Sisi\t: ";
	cin>>sisi;
	
	ss=2*sisi;
	Luas=ss*tinggi/2;
	
	cout<<"Luas\t\t\t: " <<Luas;
	
	return 0;
}
	
