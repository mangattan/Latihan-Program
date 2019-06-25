#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int r, r2;
	float phi, Luas;
	
	phi=3.14;

	
	cout<<"MENGHITUNG LUAS LINGKARAN\n";
	cout<<"Masukan Jari-jari :";
	cin>>r;
	
	r2=pow(r,2);
	Luas=phi*r2;

	
	cout<<"Luas= " <<Luas;
	return 0;
	
}
