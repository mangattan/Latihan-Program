#include <iostream>

using namespace std;

int main()
{
	int s1, s2, s3, s4, Keliling;
	cout<<"Menghitung Keliling Trapesium\n";
	cout<<"Masukan Panjang Sisi 1\t: ";
	cin>>s1;
	cout<<"Masukan Panjang Sisi 2\t: ";
	cin>>s2;
	cout<<"Masukan Panjang Sisi 3\t: ";
	cin>>s3;
	cout<<"Masukan Panjang Sisi 4\t: ";
	cin>>s4;
	
	Keliling=s1+s2+s3+s4;
	
	cout<<"Keliling\t\t: " <<Keliling;
	return 0;
}
