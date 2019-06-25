#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int r;
	float phi, Keliling;
	
	phi=3.14;

	
	cout<<"MENGHITUNG KELILING LINGKARAN\n";
	cout<<"Masukan Jari-jari :";
	cin>>r;
	
	Keliling=2*phi*r;
	cout<<"\nKeliling= " <<Keliling;
	return 0;
	
}
